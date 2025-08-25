#include<iostream>
#include<unordered_map>
// Note: <bits/stdc++.h> is a non-standard header. It's better to include only what you need.

using namespace std;
class LRUCache {
public:
    class Node{
        public: 
            int key;
            int val;
            Node* prev;
            Node* next;
            Node(int key, int val) {
                this->key = key;
                this->val = val;
                prev = next = nullptr;
            }
    };
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    int cap;
    unordered_map<int, Node*> m;
    LRUCache(int capacity) {
        cap = capacity;
        head -> next = tail;
        tail -> prev = head;
    }

    // Destructor to prevent memory leaks by cleaning up all nodes.
    ~LRUCache() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
    void addNode(Node* newnode){
        Node* temp = head -> next;
        newnode -> next = temp;
        newnode -> prev = head;
        head -> next = newnode;
        temp -> prev = newnode;
    }
    void deleteNode(Node* delnode){
        Node* prevv = delnode -> prev;
        Node* nextt = delnode -> next;
        prevv -> next = nextt;
        nextt -> prev = prevv;
    }
    int get(int key) {
        // If key is not found, return -1.
        if(m.find(key) == m.end()){
            return -1;
        }
        
        Node* node = m[key];
        // Move the accessed node to the front of the list (most recently used).
        deleteNode(node);
        addNode(node);
        return node->val;
    }
    void put(int key, int value) {
        // If the key already exists, update its value and move it to the front.
        if(m.find(key) != m.end()){
            Node* existingNode = m[key];
            existingNode->val = value;
            deleteNode(existingNode);
            addNode(existingNode);
        } else {
            // If the key does not exist, add a new node.
            // First, check if the cache is at capacity.
            if(m.size() == cap){
                // Evict the least recently used node (the one before tail).
                Node* lru_node = tail->prev;
                m.erase(lru_node->key);
                deleteNode(lru_node);
                delete lru_node; // IMPORTANT: Free the memory for the evicted node.
            }
            // Add the new node to the front of the list and to the map.
            Node* newNode = new Node(key, value);
            addNode(newNode);
            m[key] = newNode;
        }
    }
};

int main() {
    // This main function provides an entry point for the program and fixes the linker error.
    LRUCache cache(2); // Create a cache with capacity 2
    cache.put(1, 1);
    cache.put(2, 2);
    cout << "Get key 1: " << cache.get(1) << endl; // returns 1
    cache.put(3, 3);    // evicts key 2
    cout << "Get key 2: " << cache.get(2) << endl; // returns -1 (not found)
    cache.put(4, 4);    // evicts key 1
    cout << "Get key 1: " << cache.get(1) << endl; // returns -1 (not found)
    cout << "Get key 3: " << cache.get(3) << endl; // returns 3
    cout << "Get key 4: " << cache.get(4) << endl; // returns 4
    return 0;
}
