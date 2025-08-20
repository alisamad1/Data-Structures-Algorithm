#include<iostream>
#include<vector> 
using namespace std;
int main(){
   cout<<"printing crr array: "<<endl;
   vector<int> crr = {1,2,3,4,5};
   for(int i = 0; i<crr.size();i++){
      cout<<crr[i]<<" ";
   }
   cout<<endl;
   cout<<"checking the vector crr is empty or not: ?"<<crr.empty()<<endl;
}