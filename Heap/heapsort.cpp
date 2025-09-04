#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>& arr, int size, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= size && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= size && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}
void Heapsort(vector<int>& arr, int n) {
    int size = n;
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, size, i);
    }
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);
        heapify(arr, i - 1, 1);
    }
}
int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    vector<int> arr(n + 1); 
    arr[0] = -1;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    Heapsort(arr, n);
    cout << "Sorted array is: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
