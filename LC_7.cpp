#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int reverse(int x){
 int ans = 0;
 while(x!=0){
    int digit = x%10;
    if((ans > INT_MAX - digit/10) || (ans < INT_MIN - digit/10)){
        return 0;
    }
    ans = (ans*10) + digit;
    x = x/10;
 }   
 return ans;
}
int main(){
    int  x = 153421459;
    cout<<"The reverse of the integer would be "<<reverse(x);
    return 0;
}