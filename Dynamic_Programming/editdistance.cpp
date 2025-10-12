#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int minValue(int x, int y, int z){
    if(x < y){
        if(x < z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y < z){
            return y;
        }
        else{
            return z;
        }
    }
}
int editdistance(string s1, string s2, int m , int n){
    int dp[m+1][n+1];
    for(int i = 0; i <= m; i++){
        for(int j = 0; j<= n; j++){
            if(i == 0){
                dp[i][j] = j;
            }
            else if(j == 0){
                dp[i][j] = i;
            }
            else if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + minValue(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
    string s1;
    string s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int m = s1.length();
    int n = s2.length();
    int result = editdistance(s1, s2, m, n);
    cout << "The minimum cost to convert string " << s1 << " to " << s2 << " is : " << result << endl;
    return 0;
}