// Given two integers, num and t. A number x is achievable if it can become equal to num after applying the following operation at most t times:

// Increase or decrease x by 1, and simultaneously increase or decrease num by 1.
// Return the maximum possible value of x.

#include <iostream>
using namespace std;
int maxNum(int num, int t)
{
      return num + 2 * t;
}
int main()
{
      int num = 4;
      int t = 1;

      cout << maxNum(num, t);
}