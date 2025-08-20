#include<iostream>
#include<vector>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x) , next(nullptr) {}
};
ListNode *reverseKGroup(ListNode * head, int k){
    ListNode * temp = head;
    for(int i = 0 ; i < k; i++){
        if(!temp){
            return head;
        }
        temp = temp->next;
    }
    ListNode * prev = nullptr;
    ListNode * current = head;
    ListNode * next = nullptr;
    for(int i = 0 ; i < k; i++){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head->next = reverseKGroup(next , k);
    return prev;
}
void printList(ListNode *head){
    while(head){
        cout<<head->val;
        if(head->next){
            cout<< " -> ";
        }
        head=head->next;
    }
    cout<<endl;
}
ListNode *createList(int arr[], int n){
    if(n==0){
        return nullptr;
    }
    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;
    for(int i = 1; i<n; i++){
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode *head = createList(arr, n);
    cout<<"Original List: ";
    printList(head);
    head = reverseKGroup(head, k);
    cout<<"reversed in k-groups in (k=" << k << "): ";
    printList(head);
    return 0;
}