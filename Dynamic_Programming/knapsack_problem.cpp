#include<iostream>
#include<vector>
#include<string>
using namespace std;
int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int knapsack(int W, vector<int> & wt, vector<int> & val, int n){
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            if(wt[i-1] <= j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";  
    cin >> n;
    vector<int> wt(n);
    vector<int> val(n);
    cout <<"Enter the weights of the elements: ";
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }  
    cout << "Enter the value of the elements: ";
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
    int W;
    cout << "Enter the knapsack Weight: ";
    cin >> W;
    int result = knapsack(W, wt, val, n);
    cout << "The knapsack Result will be " << result << endl;
    return 0;
}