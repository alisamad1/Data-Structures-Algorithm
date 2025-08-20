#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minTimetoVisitAllPoints(vector<vector<int>>& points){
    int result = 0;
    int x1 = points.back()[0];
    int y1 = points.back()[1];
    while(!points.empty()){
        int x2 = points.back()[0];
        int y2 = points.back()[1];
        points.pop_back();
        result += max(abs(y2-y1), abs(x2-x1));
        x1 = x2;
        y1 = y2;
    }
    return result;
}
int main(){
    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};
    cout << minTimetoVisitAllPoints(points)<<endl;
    return 0;
}