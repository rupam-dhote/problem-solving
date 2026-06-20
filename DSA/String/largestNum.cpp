// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// Since the result may be very large, so you need to return a string instead of an integer.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool compare(string &a, string &b)
{
      return a + b > b + a;
}
string ans(vector<int> &nums)
{
      vector<string> num;
      for (int i = 0; i < nums.size(); i++)
      {
            num.push_back(to_string(nums[i]));
      }
      sort(num.begin(), num.end(), compare);
      string ans = "";
      int j = nums.size();
      for (int i = 0; i < nums.size(); i++)
      {
            if (num[i] != "0")
            {
                  j = i;
                  break;
            }
      }
      for (int i = j; i < nums.size(); i++)
      {
            ans += num[i];
      }
      if (ans == "")
      {
            return "0";
      }
      return ans;
}
int main()
{
      vector<int> nums = {432, 43243};
      cout << ans(nums);
      return 0;
}