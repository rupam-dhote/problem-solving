// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.
#include<iostream>
#include<vector>

using namespace std;
int first(vector<int> n,int target){
      if(n.size()==0) return -1;
      int s=0;
      int e=n.size()-1;
      int ans=-1;
      while(s<=e){
            int mid=s+(e-s)/2;
            if(n[mid]==target){
                  ans=mid;
                  e=mid-1;
            }else if(n[mid]<target){
                  s=mid+1;
            }else {
                  e=mid-1;
            }
      }
      return ans;
}
int second(vector<int> n,int target){
      if(n.size()==0) return -1;
      int s=0;
      int e=n.size()-1;
      int ans=-1;
      while(s<=e){
            int mid=s+(e-s)/2;
            if(n[mid]==target){
                  ans=mid;
                  s=mid+1;
            }else if(n[mid]<target){
                  s=mid+1;
            }else {
                  e=mid-1;
            }
      }
      return ans;
}
vector<int> firstLast(vector<int> n,int target){
      return {first(n,target),second(n,target)};
}
int main(){
      vector<int> n={5};
      int target=5;
      vector<int> ans=firstLast(n,target);
      for(auto i:ans){
            cout<<i<<",";
      }
      return 0;
}