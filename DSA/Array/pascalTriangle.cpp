// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int n){
      vector<vector<int>> ans;
      ans.push_back({1});
      if(n==1) return ans;
      ans.push_back({1,1});
      if(n==2) return ans;
      ans.push_back({1,2,1});
      if(n==3) return ans;

      int i=3;
      while (i<n)
      {
            vector<int> temp;
            temp.push_back(1);
            int s=0;
            int next=1;

            while(next<ans[i-1].size()){
                  temp.push_back((ans[i-1][s++]+ans[i-1][next++]));
            }
            temp.push_back(1);
            ans.push_back(temp);
            i++;
      }
      return ans;
}
int main(){
      int n=5;
      vector<vector<int>> ans=generate(n);

      for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                  cout<<ans[i][j];
            }
            cout<<endl;
      }
      return 0;
}