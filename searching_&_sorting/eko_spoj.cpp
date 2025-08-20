#include<iostream>
#include<algorithm>
using namespace std;
bool isPossibleSolution(vector <long long int trees, long long int mid){
    long long int woodcollected = 0;
    for(int i = 0; i< trees.size(); i++){
        if(trees[i] > mid){
            woodcollected += trees[i] - mid;
        }
    }
    return woodcollected >= m;
}
long long int maxsawbladeHeight(vector <long long int> trees,long long int m){
    long long int start = 0; 
    long long int end ;
    long long int ans = -1;
    end = *max_element(trees.begin(), trees.end());
    while(start<=end){
        long long int mid = start + (end - start) / 2;
        if(isPossibleSolution(trees, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    long long int n, m;
    cin>>n>>m;
    vector<long long int > trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<<maxsawbladeHeight(trees,m) << endl;
    return 0;
}