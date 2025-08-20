#include<iostream>
#include<vector>
using namespace std;
void dfs(int openP , int closeP, string s, int n, vector<string>& res){
    if(openP == closeP && openP + closeP == n * 2){
        res.push_back(s);
        return;
    }
    if(openP < n){
        dfs(openP + 1, closeP, s + '(', n ,res);
    }
    if(closeP < openP){
        dfs(openP , closeP + 1, s + ')', n , res);
    }
}
vector<string> generateparenthesis(int n){
    vector<string> res;
    dfs(0,0,"",n ,res);
    return res;
}
int main(){
    int n;
    cout << "Enter the value of n: " ;
    cin >> n;
    vector<string> result = generateparenthesis(n);
    for(string s: result){
        cout << s << endl;
    }
    cout << endl;
    return 0;
}
