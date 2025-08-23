#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1; // Pointer for last element of initial nums1
    int p2 = n - 1; // Pointer for last element of nums2
    int i = m + n - 1; // Pointer for last position in merged nums1

    // Merge in reverse order
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[i] = nums1[p1];
            p1--;
        } else {
            nums1[i] = nums2[p2];
            p2--;
        }
        i--;
    }

    // If there are remaining elements in nums2, copy them
    while (p2 >= 0) {
        nums1[i] = nums2[p2];
        p2--;
        i--;
    }
 }
int main(){
    int m;
    cout << "Enter the number of elements for array1 : " ;
    cin >> m;
    int n;
    cout << "Enter the number of elements for array2 :  ";
    cin >> n;
    // As per the problem, nums1 has space for m+n elements.
    vector<int> nums1(m + n);
    vector<int> nums2(n);
    cout << "Enter the " << m << " sorted elements of array 1: ";
    for(int i = 0 ; i< m ; i++){
        cin >> nums1[i];
    }
    cout << "Enter the " << n << " sorted elements of array 2: ";
    for(int i = 0; i < n; i++){
        cin >> nums2[i];
    }
    // The call to merge was incorrect. It needs m and n.
    merge(nums1, m, nums2, n);
    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++){
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}