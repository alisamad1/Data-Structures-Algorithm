#include<iostream>
#include<vector>
#include<string>
using namespace std;
class heap{
    public:
        int arr[100];
        int size = 0;
        heap(){
            arr[0] = -1;
            size = 0;
        }
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;
            while(index > 1){
                int parent = index / 2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }
    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deletefromHeap(){
        if(size == 0){
            cout << "Nothing to delete from Heap" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i < size){
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if(leftIndex < size && arr[leftIndex] > arr[i]){
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }
};
int main(){
    heap h;
    h.insert(50);
    h.insert(57);
    h.insert(12);
    h.insert(53);
    h.insert(64);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}