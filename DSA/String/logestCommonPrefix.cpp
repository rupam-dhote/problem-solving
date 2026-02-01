#include<iostream>
#include<string>
using namespace std;

int main(){
     string strs[3] = {"flower","flog","flo"};
     string prefix=strs[0];
     for(int i=1;i<3;i++){
       int j=0;
       while(j<prefix.size()&&j<strs[i].size()&&prefix[j]==strs[i][j]){
            j++;
       }
       if(!j){
            prefix="";
            break;
       }
       prefix=prefix.substr(0,j);
     }

     cout<<prefix;
     return 0;
}