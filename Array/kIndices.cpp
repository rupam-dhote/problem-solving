// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool isDup(vector<int> n,int k){
      if(k==0) return false;
     unordered_map<int,int> mp;
     for (int i = 0; i < n.size(); i++)
     {
       auto it=mp.find(n[i]);
       if(it!=mp.end()&&(i-it->second)<=k) return true;
       mp[n[i]]=i;
     }
     
      return false;
}
int main(){
      vector<int> n={1,0,1,1};
      cout<<isDup(n,1);
      return 0;
}

