#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int maxheights(vector<int>& heights){
    int i = 0;
    int j = heights.size() - 1;
    int maxwater = 0;
    while(i < j){
        int height = min(heights[i], heights[j]);
        int width = j - i;
        int area = height * width;
        maxwater = max(maxwater, area);
        if(heights[i] < heights[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxwater;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> heights(n);
    cout << "Enter the heights of the containers: ";
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }
    int result = maxheights(heights);
    cout << "The maximum amount of water that can be contained is: " << result << endl;
    return 0;
}