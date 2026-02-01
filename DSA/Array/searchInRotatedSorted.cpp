// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int s, int e, int target)
{
      int mid = s + (e - s) / 2;
      while (s < e)
      {
            if (nums[mid] == target)
            {
                  return mid;
            }
            if (nums[mid] > target)
            {
                  e = mid - 1;
            }
            else
            {
                  s = mid + 1;
            }
            mid = s + (e - s) / 2;
      }

      return -1;
}
int searchTarget(vector<int> &nums, int target)
{
      int n = nums.size();
      if (n == 0)
      {
            return -1;
      }
      if (n == 1)
      {
            if (nums[0] == target)
                  return 0;
            else
                  return -1;
      }
      if (nums[0] > nums[n - 1])
      {
            int index = -1;
            for (int i = n - 1; i > 0; i--)
            {
                  if (nums[i - 1] > nums[i])
                  {
                        index = i;
                        break;
                  }
            }
            int firsthalf = binarySearch(nums, 0, index - 1, target);
            int secondhalf = binarySearch(nums, index, n - 1, target);

            if (firsthalf == -1 && secondhalf == -1)
            {
                  return -1;
            }

            if (firsthalf != -1)
                  return firsthalf;
            else
                  return secondhalf;
      }
      return binarySearch(nums, 0, n - 1, target);
}
int main()
{
      vector<int> nums = {0, 1, 2, 3};
      cout << searchTarget(nums, 2);
      return 0;
}