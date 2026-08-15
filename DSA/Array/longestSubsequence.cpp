// You are given an integer array nums.

// Return the length of the longest subsequence in nums whose bitwise XOR is non-zero. If no such subsequence exists, return 0

#include <iostream>
#include <vector>

using namespace std;

int longestSubsequence(vector<int> &nums)
{
      int x = 0;

      for (int num : nums)
      {
            x ^= num;
            }

      if (x != 0)
            return nums.size();

      for (int num : nums)
      {
            if (num != 0)
            {
                  return nums.size() - 1;
            }
      }

      return 0;
}

int main()
{
      vector<int> nums = {1, 1, 1, 1, 0};
      cout << longestSubsequence(nums);
      return 0;
}