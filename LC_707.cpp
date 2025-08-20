#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    int get(int index) {
        Node* temp = head;
        int i = 0;
        while (temp != NULL) {
            if (i == index) return temp->val;
            temp = temp->next;
            i++;
        }
        return -1;
    }
    void addAtHead(int val) {
        Node* newNode = new Node(val); // fixed: was hardcoded as 1
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        int i = 0;
        while (temp != NULL && i < index) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL && i == index) {
            addAtTail(val);
            return;
        }
        if (temp == NULL) return;
        Node* newNode = new Node(val);
        newNode->next = temp;
        newNode->prev = temp->prev;
        if (temp->prev != NULL)
            temp->prev->next = newNode;
        temp->prev = newNode;
    }
    void deleteAtIndex(int index) {
        if (head == NULL) return;
        Node* temp = head;
        int i = 0;
        while (temp != NULL && i < index) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) return;
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        else
            tail = temp->prev;
        delete temp;
    }
    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(10);
    obj->addAtTail(20);
    obj->addAtTail(30);
    obj->addAtIndex(1, 15); // List becomes 10->15->20->30
    cout << "Current List: ";
    obj->printList();
    cout << "Element at index 2: " << obj->get(2) << endl; // Should print 20
    obj->deleteAtIndex(1); // Delete value 15
    cout << "After deleting index 1: ";
    obj->printList(); // Should be 10->20->30
    obj->deleteAtIndex(0); // Delete value 10
    cout << "After deleting head: ";
    obj->printList(); // Should be 20->30
    obj->deleteAtIndex(10); // Invalid index, no change
    cout << "After attempting to delete invalid index: ";
    obj->printList();
    delete obj;
    return 0;
}
