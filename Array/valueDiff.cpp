// You are given an integer array nums and two integers indexDiff and valueDiff.

// Find a pair of indices (i, j) such that:

// i != j,
// abs(i - j) <= indexDiff.
// abs(nums[i] - nums[j]) <= valueDiff, and
// Return true if such pair exists or false otherwise.
#include<iostream>
#include<vector>

using namespace std;

bool isPresent(vector<int> nums,int indxDiff,int valDiff){
      int s=0;
      int n=nums.size();

      while(s<n){
            int size=s+indxDiff;
            for(int j=s+1;j<=size&&size<n;j++){
                  if(s!=j&&abs(s-j)<=indxDiff&&abs(nums[s]-nums[j])==valDiff){
                        return true;
                  }
            }
            s++;
      }
      return false;
}

int main(){
      vector<int> nums={1,5,9,1,5,9};
      int indxDiff=2;
      int valDiff=3;
      cout<<isPresent(nums,indxDiff,valDiff);
      return 0;
}