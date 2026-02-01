// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
using namespace std;

int profit(int* prices,int s){
      
     if (s == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < s; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];   // better day to buy
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;  // better profit
        }
    }

    return maxProfit;

}
int main()
{
      int prices[1]={1};

      int ans=profit(prices,1);

      cout<<ans;

      return 0;
}