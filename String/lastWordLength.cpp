// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

#include<iostream>
#include<string>

using namespace std;
int lengthOfWord(string s){
      int p=s.size()-1;
      int count=0;
      while(p>=0){
            if(s[p]!=' '){
                  break;
            }
            p--;
      }
      while(p>=0){
            if(s[p--]==' '){
                  return count;
            }
            count++;
      }
      return count;
}
int main(){
      string s = " the man with horns  ";
      cout<<lengthOfWord(s);
      return 0;
}