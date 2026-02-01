
// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

#include<iostream>
#include<vector>
using namespace std;

vector<int> getIndex(int n){
       vector<vector<int>> ans;

        ans.push_back({1});
        ans.push_back({1,1});
        ans.push_back({1,2,1});

        if(n<3) return ans[n];

        int i=3;

        while(i<=n){
            vector<int> temp;
            temp.push_back(1);
            int s=0,next=1;

            while(next<ans[i-1].size()){
                temp.push_back((ans[i-1][s++]+ans[i-1][next++]));
            }
            temp.push_back(1);
            ans.push_back(temp);

            i++;
        }

        return ans[n];
}
int main(){
      int n=4;
      vector<int> ans=getIndex(n);

      for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
      }
      return 0;
}