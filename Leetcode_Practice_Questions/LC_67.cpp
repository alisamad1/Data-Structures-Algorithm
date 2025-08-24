// Add Binary 
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;
string addBinary(string a, string b){
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string ans;
    while(i >= 0 || j >= 0 || carry){
        if(i >= 0){
            carry += a[i] - '0';
            i--;
        }
        if(j >= 0){
            carry += b[j] - '0';
            j--;
        }
        ans += carry % 2 + '0';
        carry /= 2;
    } 
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string a;
    string b;
    cout << "Enter the string A: "  ;
    cin >> a;
    cout << "Enter the string B: " ;
    cin >> b;
    string result = addBinary(a,b);
    cout << "The result of the string A and B is: " << result << endl;
    return 0;
}