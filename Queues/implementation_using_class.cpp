#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue(){
        size = 100001;
        qfront = 0;
        rear = 0;
        arr = new int[size];
    }

    // Destructor to prevent memory leaks by freeing the allocated array
    ~Queue(){
        delete[] arr;
    }

    bool isEmpty(){
        // This logic was inverted. The queue is empty if front and rear are equal.
        return qfront == rear;
    }

    void enqueue(int data){ // also known as push function in queue
        if(rear == size){
            cout << "Queue is full" << endl;
        }
        else{
            arr[rear] = data; // Add element to the rear
            rear++;
        }
    }

    int dequeue(){ // also known as pop operation
        if(isEmpty()){
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        else{
            int ans = arr[qfront]; // Store the front element
            arr[qfront] = -1; // Optional: clear the dequeued slot
            qfront++;
            // If the queue becomes empty after dequeue, reset pointers to reuse the array
            if(qfront == rear){ 
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(isEmpty()){
            cout << "Queue is empty." << endl;
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){
    // The main function has been updated to test the queue and show the output.
    Queue q1;

    cout << "Enqueuing elements: 10, 20, 30, 40" << endl;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);

    cout << "Front element is: " << q1.front() << endl;

    cout << "Is queue empty? " << (q1.isEmpty() ? "Yes" : "No") << endl;

    cout << "Dequeuing element: " << q1.dequeue() << endl;
    cout << "New front element is: " << q1.front() << endl;

    cout << "Dequeuing element: " << q1.dequeue() << endl;
    cout << "Dequeuing element: " << q1.dequeue() << endl;

    cout << "Front element is: " << q1.front() << endl;

    cout << "Dequeuing element: " << q1.dequeue() << endl; // Queue becomes empty here

    cout << "Is queue empty? " << (q1.isEmpty() ? "Yes" : "No") << endl;

    q1.dequeue(); // Attempt to dequeue from an empty queue
    return 0;
}