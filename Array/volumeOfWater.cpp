// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

#include<iostream>
#include<vector>
using namespace std;
int volume(vector<int> h){
      int maxW=0;
      int s=0,e=h.size()-1;
      
      while(s<e){
            int hi=min(h[s],h[e]);
            int w=e-s;
            int area=hi*w;
            maxW=max(maxW,area);
            if(h[s]<h[e]){
                  s++;
            }else{
                  e--;
            }
      }

   return maxW;
}
int main(){
      vector<int> height={1,8,6,2,5,4,8,3,7};
      cout<<"Volume : "<<volume(height);
      return 0;
}