// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

#include<iostream>
#include<vector>

using namespace std;
void print(vector<char> s){
      for(auto i:s){
            cout<<i;
      }
      cout<<endl;
}
void reverseArry(vector<char>& s){
      
      int e=s.size();

      for(int i=0;i<e/2;i++){
            char ch=s[i];
            s[i]=s[e-1-i];
            s[e-i-1]=ch;
            cout<<ch;
      }
}
int main(){
      vector<char> s={'h','e','l','l','o'};
      
      cout<<"Before reversing : - "<<endl;
      print(s);
      reverseArry(s);
      cout<<"After reversing : - "<<endl;
      print(s);
      return 0;
}
