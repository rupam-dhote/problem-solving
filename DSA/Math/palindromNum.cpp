// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(int x)
{
      string num = to_string(x);

      int s = 0;
      int e = num.length() - 1;

      while (s < e)
      {
            if (num[s++] != num[e--])
            {
                  return false;
            }
      }
      return true;
}
int main()
{
      int x = -121;
      cout << isPalindrome(x);
}