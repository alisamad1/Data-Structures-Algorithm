#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int fractionalKnapsack(int W, vector<int>& wt, vector<int>& val, int n){
    vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; i++){
        dp[i] = 0;
    }
    for(int i = 0; i <= n; i++){
        for(int w = W; w >= wt[i]; w--){
            dp[w] = max(dp[w], dp[w-wt[i]] + val[i]);
        }
    }
    return dp[W];
}
int main(){
    int n;
    cout << "Enter the number of items:";
    cin >> n;
    vector<int> wt(n);
    cout << "Enter the weight of the items: ";
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }
    vector<int> val(n);
    cout << "Enter the value of the items: ";
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
    int W;
    cout << "Enter the knapsack capacity: ";
    cin  >> W;
    int result = fractionalKnapsack(W, wt, val, n);
    cout << "The maximum value in the knapsack is: " << result << endl;
    return 0;
}