#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(int _val) : val(_val) {}
};
Node* cloneGraph(Node* node) {
    if (!node) return NULL;
    unordered_map<Node*, Node*> visited;
    queue<Node*> q;
    q.push(node);
    visited[node] = new Node(node->val);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        for (Node* neighbor : curr->neighbors) {
            if (!visited.count(neighbor)) {
                visited[neighbor] = new Node(neighbor->val);
                q.push(neighbor);
            }
            visited[curr]->neighbors.push_back(visited[neighbor]);
        }
    }
    return visited[node];
}
void printGraph(Node* node) {
    if (!node) return;
    unordered_map<Node*, bool> visited;
    queue<Node*> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << "Node " << curr->val << " neighbors: ";
        for (Node* neighbor : curr->neighbors) {
            cout << neighbor->val << " ";
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
        cout << endl;
    }
}
int main() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};
    cout << "Original Graph:" << endl;
    printGraph(n1);
    Node* cloned = cloneGraph(n1);
    cout << "\nCloned Graph:" << endl;
    printGraph(cloned);
    return 0;
}
