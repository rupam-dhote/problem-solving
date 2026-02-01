// Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
 
#include<iostream>
#include<string>

using namespace std;

int titleToNum(string s){
      int num=0;

      for(int i=0;i<s.size();i++){
            num=num*26+(s[i]-'A'+1);
      }
      return num;
}
int main(){

      string s="ALL";
      
      cout<<titleToNum(s)<<endl;
      return 0;
}