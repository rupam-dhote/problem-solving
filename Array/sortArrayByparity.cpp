// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.

#include<iostream>
#include<vector>

using namespace std;
bool isEven(int val){
      return !(val%2);
}

void sortByParity(vector<int>& n){
    int s=0,e=n.size()-1;
    while(s<e){
      if(!isEven(n[s])&&isEven(n[e])){
            swap(n[s++],n[e--]);
      }else if(isEven(n[s])){
            s++;
      }else{
            e--;
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