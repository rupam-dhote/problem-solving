// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.
#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int>& n){
    if(n.size()==1) return ;

//     for(int i=0;i<n.size();i++){
//       int j=0;
//       while(j<n.size()-i-1){
//             if(n[j]==0){
//                   swap(n[j],n[j+1]);
//             }
//             j++;
//       }
//     }

  int s=0,e=1;
  while (s<n.size()&&e<n.size()){
      if(n[s]==0&&n[e]!=0){
           swap(n[s++],n[e++]); 
      }else if(n[e]==0){
            e++;
      }else if(n[s]!=0){
            s++;
      }
      if(s>=e){
            e=s+1;
      }
  }
  
}
int main(){
      vector<int> n={0,1,2,0,3,0,4};
      moveZeros(n);
      for(auto i:n){
            cout<<i<<" ";
      }
      return 0;
}