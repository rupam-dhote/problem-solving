// Given an integer array nums, handle multiple queries of the following type:

// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
// Implement the NumArray class:

// NumArray(int[] nums) Initializes the object with the integer array nums.
// int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).

#include <iostream>
#include <vector>
using namespace std;
class NummyArray
{
private:
      vector<int> ans;

public:
      NummyArray(vector<int> &nums)
      {
            int n = nums.size();
            ans.resize(n + 1);
            ans[0] = 0;
            for (int i = 0; i < n; i++)
            {
                  ans[i + 1] = (ans[i] + nums[i]);
            }
      }
      int sumRange(int left, int right)
      {

            return ans[right + 1] - ans[left];
      }
};

int main()
{
      vector<int> nums = {-2, 0, 3, -5, 2, -1};
      NummyArray *obj = new NummyArray(nums);
      cout << obj->sumRange(0, 2) << endl;
      cout << obj->sumRange(2, 5) << endl;
      cout << obj->sumRange(0, 5) << endl;
      return 0;
}