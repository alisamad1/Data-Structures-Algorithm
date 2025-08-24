#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
int divide(int dividend, int divisor){
    if(dividend == INT_MIN && divisor == -1){
        return INT_MAX;
    }
    return dividend / divisor;
}
int main(){
    int dividend;
    int divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    int result = divide(dividend, divisor);
    cout << "Result: " << result << endl;
    return 0;
}