// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include<iostream>
using namespace std;
int removeElement(int* nums,int val,int size){
      if(!size || (size==1&&nums[0]==val)){
            return 0;
      }
      int k=0,i=0;
      int j=size-1;
      
      while(i<=j)
      {
           while(j!=-1&&nums[j]==val&&i!=j){
            j--;
            k++;
           } 
           if(nums[i]==val&&j!=-1){
               int temp=nums[i];
               nums[i]=nums[j];
               nums[j]=temp;
               j--;
               k++;
           }
           i++;
      }
      return size-k;
}
int main()
{
      int nums[1]={1};
      int val=1;
      int k=removeElement(nums,val,1);
      cout<<k<<endl;
      for(int i=0;i<k;i++)
      {
            cout<<nums[i]<<",";
      }
      return 0;
}