#include <iostream>
#include <string>
using namespace std;
void saydigits(int n, string arr[]) {  
    if (n == 0) {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    saydigits(n, arr);
    cout << arr[digit] << " ";
}
int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;
    cout << endl;
    if (n == 0) {
        cout << arr[0] << " ";
    } else {
        saydigits(n, arr);
    }
    return 0;
}
