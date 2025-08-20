#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<cmath>
string getSortedStr(int n) {
        string s = to_string(n);
        sort(begin(s), end(s));
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s = getSortedStr(n);
        for(int p = 0; p <= 29; p++) {
            if(s == getSortedStr(1 << p)) {
                return true;
            }
        }
        return false;
    }
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(reorderedPowerOf2(n)){
        cout << n << " can be reordered to a power of 2." << endl;
    } else {
        cout << n << " cannot be reordered to a power of 2." << endl;
    }
    return 0;
}
