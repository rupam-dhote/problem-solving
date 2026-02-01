// Given a pattern and a string s, find if s follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

// Each letter in pattern maps to exactly one unique word in s.
// Each unique word in s maps to exactly one letter in pattern.
// No two letters map to the same word, and no two words map to the same letter.
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

bool isPattern(string pattern,string s){
   vector<string> words;
   string word="";

   for(int i=0;i<s.length();i++){
      if(s[i]==' '){
            words.push_back(word);
            word="";
            i++;
      }
      word.push_back(s[i]);
   }
   words.push_back(word);

   if(words.size()!=pattern.length()) return false;
   if(pattern.length()==1) return true;

   unordered_map<char,string> pMap;
   unordered_map<string,char> sMap;

   for(int i=0;i<pattern.length();i++){
      pMap[pattern[i]]=words[i];
      sMap[words[i]]=pattern[i];
   }
   
   for(int i=0;i<pattern.length();i++){
      auto p=pMap.find(pattern[i]);
      auto w=sMap.find(words[i]);

      if(p->first!=w->second||w->first!=p->second)
      {
            return false;
      }
            
   }
    
   return true;

}
int main(){
      string pattern="abba";
      string s="dog cat cat dob";
      cout<<isPattern(pattern,s);
      return 0;
}