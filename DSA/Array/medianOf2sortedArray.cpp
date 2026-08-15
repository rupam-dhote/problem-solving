#include <iostream>
#include <vector>
using namespace std;

double medianOfArrays(vector<int> nums1, vector<int> nums2)
{
      vector<int> mergeArr;
      int i = 0;
      int j = 0;

      while (i < nums1.size() && j < nums2.size())
      {
            if (nums1[i] < nums2[j])
            {
                  mergeArr.push_back(nums1[i++]);
            }
            else
            {
                  mergeArr.push_back(nums2[j++]);
            }
      }

      // if nums1 is greater
      while (i < nums1.size())
      {
            mergeArr.push_back(nums1[i++]);
      }

      // if nums2 is greater
      while (j < nums2.size())
      {
            mergeArr.push_back(nums2[j++]);
      }

      int sizeOfArr = mergeArr.size();

      int mid = 0 + (sizeOfArr - 0) / 2;
      if (sizeOfArr % 2)
      {
            return mergeArr[mid];
      }

      return double(mergeArr[mid] + mergeArr[mid - 1]) / 2;
}

int main()
{
      vector<int> nums1 = {1, 2, 3};
      vector<int> nums2 = {2, 4};
      cout << "median of : " << medianOfArrays(nums1, nums2);
      return 0;
}