
// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

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

string columnNum(int columnNumber){

     
      
      string ans="";
      while(columnNumber){
      
               char ch='A'+(--columnNumber%26);
                  ans=ch+ans;
            columnNumber/=26;

      }
      
      return ans;
}
int main(){
      int num=1000;

      cout<<columnNum(num);
      return 0;
}
