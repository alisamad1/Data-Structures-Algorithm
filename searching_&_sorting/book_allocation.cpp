//book_allocation_problem
#include <stdio.h>
#include <iostream>
using namespace std;
bool ispossibleSolution(int A[],int N, int M, int sol){
    int pagesum = 0;
    int c = 1;
    for(int i = 0; i<N; i++){
        if(A[i] > pagesum){
            return false;
        }
        if(pagesum + A[i] > sol){
            c++;
            pagesum = A[i];
            if(c > M){
                return false;
            }
        }
        else{
            pagesum += A[i];
        }
    }
    return true;
}
int findpages(int A[], int N, int M ){
    if(M>N){
        return -1;
   }
    int start = 0;
    int end = accumulate(A,A+N,0);
    int ans = -1;
    while(start<=end){
        int mid = (start + end) >> 1;
        if(ispossibleSolution(A,N,M,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}