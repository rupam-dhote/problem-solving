// Given an integer num, return the number of steps to reduce it to zero.

// In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

#include <iostream>
using namespace std;

int numZero(int num)
{
      int step = 0;
      while (num)
      {
            if (num % 2)
            {
                  num -= 1;
            }
            else
            {
                  num /= 2;
            }
            step++;
      }

      return step;
}
int main()
{
      int num = 14;
      cout << numZero(num);
      return 0;
}