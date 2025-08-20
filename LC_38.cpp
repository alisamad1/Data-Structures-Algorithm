// we will be wrinting the code for Count and say question on leetcode # 34
#include<iostream>
#include<string>
using namespace std;
string countandsay(int n){
    string res = "1";
    for(int i = 1; i < n; i++){
        int count = 1;
        string temp = "";
        for(int j = 1; j < res.size(); j++){
            if(res[j] == res[j-1]){
                count++;
            }
            else{
                temp += to_string(count) + res[j-1];
                count = 1;
            }
        }
        temp += to_string(count) + res.back();;
        res = temp;
    }
    return res;
}
int main(){
    int n; 
    cout << "Enter the value of n: ";
    cin >> n;
    string result = countandsay(n);
    cout << "The " << n << "th term in the count and say sequence is : "<< result << endl;
    return 0;
}
