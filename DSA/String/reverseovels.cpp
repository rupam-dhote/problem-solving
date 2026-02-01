// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void reverseVovels(string& str){
      char vovels[5]={'a','e','i','o','u'};

      int s=0;
      int e=str.length()-1;
      int sIndex=-1;
      int eIndex=-1;
      while(s<e){
                  char sVal=tolower(str[s]);
                  char eVal=tolower(str[e]);
            for(int j=0;j<5;j++){
                  
                  
                  if(sVal ==vovels[j]){
                        sIndex=s;
                       
                  } 
                  if(eVal ==vovels[j]){
                        eIndex=e;
                       
                  }
            }

            if(sIndex!=-1&&eIndex!=-1){
                  char tem=str[sIndex];
                  str[sIndex]=str[eIndex];
                  str[eIndex]=tem;
                  sIndex=-1;
                  eIndex=-1;
                  s++;
                  e--;
                  continue;
            }
            if(s!=sIndex){
                 
                  s++;
            }
            if(e!=eIndex){
                 
                   e--;
            }
           
      }
     
      
}

int main(){
      string s="aelikou";
      
      cout<<s<<endl;
      reverseVovels(s);
      cout<<s<<endl;
      return 0;
}