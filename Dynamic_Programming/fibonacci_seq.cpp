#include<iostream>
#include<vector>
using namespace std;
int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout << "Enter the number n to find its Fibonacci number: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "The Fibonacci number of " << n << " is " << result << endl;
    return 0;
}
