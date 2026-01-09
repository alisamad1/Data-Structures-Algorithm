#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool valid(string s){
    int n = s.size();
    if(n == 1){
        return true;
    }
    if(n > 3 || s[0] == '0'){
        return false;
    }
    int val = stoi(s);
    if(val > 255){
        return false;
    }
    return true;
}
vector<string> restoreIpAddresses(string s){
    int n = s.size();
    vector<string> ans;
    if(n > 12){
        return ans;
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            for(int k = 1; k <= 3; k++){
                if(i + j + k + 3 >= n && i + j + k < n){
                    string a = s.substr(0,i);
                    string b = s.substr(i,j);
                    string c = s.substr(i + j, k);
                    string d = s.substr(i + j + k);
                    if(valid(a) && valid(b) && valid(c) && valid(d)){
                        ans.push_back(a + "." + b + "." + c + "." + d);
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    vector<string> result = restoreIpAddresses(s);
    cout << "Possible valid IP addresses are: " << endl;
    for(const string & it: result){
        cout << it << endl;
    }
    return 0;
}