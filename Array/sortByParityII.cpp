// You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

// Replace each even number with 0.
// Replace each odd numbers with 1.
// Sort the modified array in non-decreasing order.
// Return the resulting array after performing these operations.
#include<iostream>
#include<vector>

using namespace std;
bool isEven(int val){
      return !(val%2);
}

void sortByParity(vector<int>& n){
    int s=0,e=n.size()-1;
    while(s<=e){
      if(!isEven(n[s])&&isEven(n[e])){
            swap(n[s],n[e]);
            n[s++]=0;
            n[e--]=1;
      }else if(isEven(n[s])){
            n[s++]=0;
      }else{
            n[e--]=1;
      }
    }

}
int main(){
      vector<int> n ={3,1,2,4};
      sortByParity(n);
      for (auto i :n)
      {
            cout<<i<<",";
      }
      
      return 0;
}