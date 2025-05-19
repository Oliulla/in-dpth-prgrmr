#include<iostream>
#include<vector>
#include <climits>
using namespace std;


int maxProfit(vector<int>& prices, int n) {
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if(profit > maxProfit) maxProfit = profit;
        }
    }
    return maxProfit;
}


int main(void) {
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices, prices.size()) << endl;
    return 0;
}