#include<iostream>
#include<string>
#include<vector>
using namespace std;
uint32_t reverseBits(int n){
    uint32_t  ans = 0;
    for(int i = 0; i < 32; i++){
        ans = ans << 1;
        if(n & 1){
            ans = ans | 1;
        }
        n = n >> 1;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The reverse of the bits of the number " << n << " is " << reverseBits(n) << endl;
    return 0;
}