// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// -------------- NOT SOLVED -----------------
#include<iostream>
#include<string>
using namespace std;

bool isValidBracket(string s){
    if(s.size()==1) return false;
    bool flagPara=true;
    bool flagSqu=true;
    bool flagCur=true;
   
    for(int i=0;i<s.size();i++){
      switch (s[i])
       {
       case '(':
            flagPara=false;
            break;
       case ')':
           if(!flagPara&&flagSqu&&flagCur){
            flagPara=true;
           }
           else{
            return false;
           }
            break;
       case '[':
            flagSqu=false;
            break;
       case ']':
           if(!flagSqu){
            flagSqu=true;
           }
           else{
            return false;
           }
            break;
       case '{':
            flagCur=false;
            break;
       case '}':
           if(flagPara&&flagSqu&&!flagCur){
            flagCur=true;
           }
           else{
            return false;
           }
            break;
       
       }
    }

    return true;
}


int main(){
      string s="([])";
      cout<<isValidBracket(s);

      return 0;
}