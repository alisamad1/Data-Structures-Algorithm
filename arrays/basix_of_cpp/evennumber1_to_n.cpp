#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Even numbers from 1 to " << n << " are: \n";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
