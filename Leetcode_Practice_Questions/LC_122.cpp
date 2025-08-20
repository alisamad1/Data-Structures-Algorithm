// We will be writing the code for Best Time to Buy and sell stocks || (Leetcode #122)
int maxProfit(vector<int>& prices) {
    int profit = 0;
    // We can buy and sell on the same day, so we can just accumulate
    // all positive price changes.
    for(size_t i = 1; i < prices.size(); i++){
        if(prices[i] > prices[i-1]){
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}
