// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> intersect(vector<int> num1, vector<int> num2)
{
      // adding freq in the map
      unordered_map<int, int> set;
      vector<int> ans;
      for (int i = 0; i < num1.size(); i++)
      {
            set[num1[i]]++;
      }

      // checking freq in map
      for (int j = 0; j < num2.size(); j++)
      {

            if (set[num2[j]] > 0)
            {
                  ans.push_back(num2[j]);
                  set[num2[j]]--;
            }
      }
      return ans;
}
int main()
{
      vector<int> num1 = {4, 9};
      vector<int> num2 = {9, 4, 9, 8, 4};
      vector<int> ans = intersect(num1, num2);

      for (auto i : ans)
      {
            cout << i << ",";
      }

      return 0;
}