#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* findMidNode(Node * head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast ->next != NULL){
        slow = slow ->next;
        fast = fast ->next->next;
    }
    return slow;
}
int main(){

    Node * first = new Node{1,NULL};
    Node * second = new Node{2,NULL};
    Node * third = new Node{3,NULL};
    Node * fourth= new Node{4,NULL};
    // connect nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    Node* mid= findMidNode(first);
    cout << mid->data << endl;
    return 0;
}