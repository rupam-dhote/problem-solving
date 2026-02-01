// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
#include<iostream>
#include<string>

using namespace std;
bool isSubsequence(string s,string t){
      if(s.empty()||t.empty()) return false;
      int i=0;
      for(int j=0;j<t.length();j++){
           if(s[i]==t[j]){
            i++;
           }
           if(i==s.length()){
            return true;
           }
      }

      return false;
}
int main()
{
      string s="abc";
      string t="bhagbdc";
      cout<<isSubsequence(s,t);
      return 0;
}