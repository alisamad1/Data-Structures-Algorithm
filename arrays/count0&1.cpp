// Count 0s and 1s in an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int count0 = 0, count1 = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
    }
    
    cout << "0s: " << count0 << endl;
    cout << "1s: " << count1 << endl;
    
    return 0;
}
