// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include<iostream>
#include<string>
#include<unordered_map>


using namespace std;
bool isValid(string s,string t){

      if(s.length()!=t.length()) return false;

//------------------Sorting Approach (TLE)--------------------- 

      // for(int i=0;i<s.size();i++){
      //       for(int j=i+1;j<t.size();j++){
      //             if(s[i]<s[j]){
      //                   swap(s[i],s[j]);
      //             }
      //             if(t[i]<t[j]){
      //                   swap(t[i],t[j]);
      //             }
      //       }
      // }

// -----------------Unordered Map Approach (good)--------------------

      // unordered_map<char,int> map;
      // for(int i=0;i<s.size();i++){
      //       map[s[i]]++;
      //       map[t[i]]--;
      // }

      // for(auto i:map){
      //       if(i.second>0||i.second<0){
      //             return false;
      //       }
      // }

// ------------------const array Approach (best)------------------
    
      int countChar[26]={0};

      for (int i = 0; i < s.length(); i++)
      {
        countChar[s[i]-'a']++;
        countChar[t[i]-'a']--;
      }
      
      for(int i=0;i<26;i++){
            if(countChar[i]!=0){
                  return false;
            }
      }
      
      return true;
}
int main(){
      string s="anagram";
      string t="nagaram";

      cout<<isValid(s,t);
      return 0;
}