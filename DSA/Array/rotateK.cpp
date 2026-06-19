// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <iostream>
#include <vector>

using namespace std;

void rotateArray(vector<int> &nums, int k)
{
      int n = nums.size();
      if (n == 1)
      {
            return;
      }
      int s = 0;
      int e = n - 1;
      k = k % n;
      while (s < e)
      {
            swap(nums[s++], nums[e--]);
      }

      s = 0;
      e = k - 1;
      while (s < e)
      {
            swap(nums[s++], nums[e--]);
      }
      s = k;
      e = n - 1;
      while (s < e)
      {
            swap(nums[s++], nums[e--]);
      }
}
int main()
{
      vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
      int k = 3;

      rotateArray(nums, k);

      for (auto i : nums)
      {
            cout << i << ",";
      }

      return 0;
}