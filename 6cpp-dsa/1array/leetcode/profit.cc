#include<iostream>
#include<vector>
using namespace std;


int maxProfit(vector<int>& prices) {
    int maxProf = 0;
    for(int i = 0; i < prices.size(); i++) {
        for(int j = i + 1; j < prices.size(); j++) {
            if(prices[j] > prices[i]) {
                int profit = prices[j] - prices[i];
                if(profit > maxProf) {
                    maxProf = profit;
                }
            }
        }
    }
    return maxProf;

}

int main(void) {
    vector<int> prices = { 7,6,4,3,1 };
    int profit = maxProfit(prices);
    cout << profit << endl;
}