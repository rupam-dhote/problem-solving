// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
using namespace std;

int reverse(int x)
{
      if (x >= INT_MAX)
      {
            return 0;
      }
      int ans = 0;
      while (x)
      {
            int digit = x % 10;
            x /= 10;

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))
            {
                  return 0;
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8))
            {
                  return 0;
            }
            ans = ans * 10 + digit;
      }

      return ans;
}
int main()
{
      int x = 1534236469;
      cout << reverse(x);

      return 0;
}