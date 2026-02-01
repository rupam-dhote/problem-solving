// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include<iostream>
#include<string>

using namespace std;

int firstUnique(string s){
      if(s.length()==1){
            return 0;
      }
      int count[26]={0};
      for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
      }
      for(int i=0;i<s.length();i++){
            int index=s[i]-'a';
            if(count[index]==1){
                  return i;
            }
      }

     return -1;
}
int main(){
      string s="efreloh";

      cout<<firstUnique(s);
}