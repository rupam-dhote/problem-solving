// Given a string s, find the length of the longest substring without duplicate characters.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int lengthOfLongestSubstring(string s)
{
      int hash[255];

      // All char of index -1
      for (int i = 0; i < 255; i++)
      {
            hash[i] = -1;
      }

      int l = 0;
      int r = 0;
      int maxLength = 0;
      while (r < s.size())
      {
            if (hash[s[r]] != -1 && hash[s[r]] >= l)
            {
                  l = hash[s[r]] + 1;
                  hash[s[r]] = r;
            }
            else
            {
                  hash[s[r]] = r;
            }

            maxLength = max(maxLength, (r++ - l + 1));
      }

      return maxLength;
}
int main()
{
      string s = "abcabcbb";

      cout << lengthOfLongestSubstring(s);
      return 0;
}