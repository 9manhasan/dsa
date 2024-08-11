#include<iostream>
#include<vector>
#include<utility>
#include<climits>
using namespace std;

int sbs(vector<int> prices)
{
    int profit = 0;
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i; j < prices.size(); j++) {
            if(prices[j] > prices[i])
            {   
                profit = max(prices[j] - prices[i], profit);
            }
        }
    }
    return profit;
}
//stock buy and sell optimised
int sbsOptimised(vector<int> prices)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice,prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}
int main() {
    vector<int> prices = {7,1,4,6,4,3,1};
    int res = sbsOptimised(prices);
    cout << res << endl;
    return 0;
}