// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.



#include<iostream>
using namespace std;
void sortedarr(int* nums1,int m,int* nums2,int n){
     int i=0,j=0; 
      int arr[n+m];
      int k=0;
      while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                  arr[k++]=nums1[i++];
            }else{
                 arr[k++]=nums2[j++]; 
            }
      }
      while(i<m&&k<m+n)
      {
            arr[k++]=nums1[i++];
      }
      while(j<n&&k<m+n){
            arr[k++]=nums2[j++];
      }
      for(i=0;i<n+m;i++)
      {
            nums1[i]=arr[i];
      }
}
int main()
{
      int nums1[6]={1,2,3,0,0,0};
      int nums2[3]={2,5,6};

      sortedarr(nums1,3,nums2,3);
      
      for(int i=0;i<6;i++)
      {
            cout<<nums1[i]<<",";
      }

      return 0;
}