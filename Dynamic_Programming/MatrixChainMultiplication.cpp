#include <iostream>
#include <climits>
#include <vector>
#include <algorithm> 
using namespace std;
int matrixChainOrder(vector<int>& p, int n) {
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                dp[i][j] = min(dp[i][j], q);
            }
        }
    }
    return dp[1][n - 1];
}
int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    vector<int> arr(n + 1);
    cout << "Enter the dimensions of the matrices: ";
    for(int i = 0; i <= n; i++){
        cin >> arr[i];
    }
    n = arr.size();
    cout << "Minimum number of multiplications is "
         << matrixChainOrder(arr, n) << endl;

    return 0;
}
