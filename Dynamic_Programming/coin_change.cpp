#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int coinchange(vector<int>& coins, int amount){
    vector<int> dp(amount + 1, 1e9);
    dp[0] = 0;
    for(int i = 1; i <= amount; i++){
        for(int coin : coins){
            if(i >= coin && dp[i-coin] != 1e9){
                dp[i] = min(dp[i], dp[i-coin] + 1);
            }
        }
    }
    if(dp[amount] == 1e9){
        return -1;
    }
    else{
        return dp[amount];
    }
}
int main(){
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter the coins: ";
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int result = coinchange(coins, amount);
    cout << "The number of ways the coins should be arranged: " << result;
    return 0; 
}