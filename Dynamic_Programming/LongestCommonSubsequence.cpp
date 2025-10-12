#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int longestcommonSubsequence(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int> (n + 1, 0));
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] =  1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
    string s1;
    cout << "Enter the first string: ";
    cin >> s1;
    string s2;
    cout << "Enter the second string: ";
    cin >> s2;
    int result = longestcommonSubsequence(s1,s2);
    cout << "The length of longest common subsequence is : " << result << endl;
    return 0;
}