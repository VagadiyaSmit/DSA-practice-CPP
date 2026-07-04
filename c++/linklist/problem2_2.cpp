// merge two sorted linklist
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* merge(Node* list1,Node* list2){
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;
    while(list1 != NULL && list2 != NULL){
        if(list1->data < list2->data){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1 != NULL){
        tail->next = list1;
    }
    else{
        tail = tail->next;
    }
    return dummy.next;
}
void traversal(Node* head){
    while(head != NULL){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
} 
int main(){
    //list 1
    Node* a1 = new Node{1,NULL};
    Node* a2 = new Node{3,NULL};
    Node* a3 = new Node{5,NULL};

    a1->next = a2;
    a2->next = a3;

    Node* b1 = new Node{2,NULL};
    Node* b2 = new Node{4,NULL};
    Node* b3 = new Node{6,NULL};

    b1 ->next = b2;
    b2 ->next = b3;
    Node* result = merge(a1,b1); 
    traversal(result);
    return 0;
}