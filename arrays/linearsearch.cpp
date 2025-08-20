#include <iostream>
using namespace std;
bool findingElement(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cout << "Enter the Number of elements in the array: ";
    cin >> n;
    // Allocate array after knowing size
    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    if (findingElement(arr, n, target)) {
        cout << "Element found" <<  endl;
    } else {
        cout << "Element not found" << endl;
    }
    delete[] arr;
    return 0;
}