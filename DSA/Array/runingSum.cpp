// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

#include <iostream>
#include <vector>
using namespace std;

void runingSum(vector<int> &nums)
{
      int sum = nums[0];
      for (int i = 1; i < nums.size(); i++)
      {
            sum += nums[i];
            nums[i] = sum;
      }
}
int main()
{
      vector<int> nums = {1, 2, 3, 4};
      runingSum(nums);

      for (auto i : nums)
      {
            cout << i << ",";
      }
      return 0;
}