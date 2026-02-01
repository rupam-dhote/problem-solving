// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string str){
      int s=0;
      int e=str.size()-1;
      
     while(s<e){
      if(!isalnum(str[s])){
            s++;
            continue;
      }
      if(!isalnum(str[e])){
            e--;
            continue;
      }
      char c=tolower(str[s]);
      char d=tolower(str[e]);
      if(c!=d){
            return false;
      }
      s++;
      e--;
     }

     return true;
}
int main(){
      string s="A man, a plan, a canal: Panama";

      cout<<isPalindrome(s);
}
