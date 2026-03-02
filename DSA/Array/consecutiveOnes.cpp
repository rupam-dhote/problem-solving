// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include <iostream>
#include <vector>
using namespace std;
int consecutiveOnes(vector<int> nums)
{
      int maxCount = 0;
      int count = 0;
      for (int i = 0; i < nums.size(); i++)
      {
            if (nums[i] == 1)
                  count++;
            else
                  count = 0;
            if (count > maxCount)
            {
                  maxCount = count;
            }
      }

      return maxCount;
}
int main()
{
      vector<int> nums = {0};
      cout << consecutiveOnes(nums);
      return 0;
}