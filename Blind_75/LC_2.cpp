// Adding Two Numbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
ListNode* addtwoNumbers(ListNode* L1, ListNode* L2){
    ListNode* dummyNode;
    ListNode* head;
    dummyNode = head = new ListNode(-1);
    if(!L1){
        return L2;
    }
    if(!L2){
        return L1;
    }
    int carry = 0;
    while(L1 || L2){
        int firstValue = L1 ? L1->next : 0;
        int secondValue = L2 ? L2->next : 0;
        int total = firstValue + secondValue + carry;
        carry = total / 10;
        total = total % 10;
        ListNode* newNode = new ListNode(total);
        dummyNode->next = newNode;
        dummyNode = dummyNode->next;
        L1 = L1 ? L1->next : L1;
        L2 = L2 ? L2->next : L2; 
    }
    if(carry){
        dummyNode->next = new ListNode(1)
    }
    return head-<next;
}
ListNode* createList(int arr[],int n){
    if(n==0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for(int i = 1; i<n-1; i++){
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}
void printList(ListNode* head){
    while(head){
            cout<<head->val;
            if(head->next){
                cout<<" -> ";
            }
            head = head->next;
    }
    cout<<endl;
}
int main(){
    int arr_1 = [2,4,3];
    int arr_2 = [5,6,4];
    ListNode* L1 = createList(arr_1,3);
    ListNode* L2 = createList(arr_2, 3);
    ListNode* result = addtwoNumbers(L1,L2);
    cout<<"result is: ";
    printList(result);
}