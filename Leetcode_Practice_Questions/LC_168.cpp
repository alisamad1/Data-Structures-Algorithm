#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string converttotitle(int num){
    string ans = "";
    while(num > 0){
        num--;
        int digit = num % 26;
        ans += digit + 'A';
        num = num / 26;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string num;
    cout << "Enter the Number: ";
    getline(cin, num);
    int n = stoi(num);
    cout << "The corresponding column title is: " << converttotitle(n) << endl;
    return 0;
}