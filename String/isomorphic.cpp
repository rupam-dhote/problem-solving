// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

#include<iostream>
#include<string>


using namespace std;
bool isIsomorphic(string s,string t){
    if (s.size() == 1) return true;

    int mapST[256] = {0};
    int mapTS[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        unsigned char a = s[i];
        unsigned char b = t[i];

        if (mapST[a] != mapTS[b])
            return false;

        mapST[a] = i + 1;
        mapTS[b] = i + 1;
    }
    return true;
}
int main(){
      string s="egl";
      string t="add";
      
      cout<<isIsomorphic(s,t);
      return 0;
}