// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include<iostream>
#include<string>

using namespace std;

int first(string h,string n){
      int index=-1;
      int j=0;
      for(int i=0;i<h.size();i++){
            if(h[i]==n[j]){
                  if(index==-1){
                        index=i;
                  }
                  j++;

            }else if(index!=-1){
                  i-=j;
                  j=0;
                  index=-1;
                  
            }
            if(j==n.size()){
                  return index;
            }
           
      }
       return -1;
}
int main(){
      string h="mississippi";
      string n="pi";

      cout<<first(h,n);
      return 0;
}