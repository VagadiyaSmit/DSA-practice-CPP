#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void traversal(struct Node* head){
    //traverse and print
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
};


int main(){
     Node * first = new Node{1,NULL};
    Node * second = new Node{2,NULL};
    Node * third = new Node{3,NULL};
    Node * fourth= new Node{4,NULL};
    // connect nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    traversal(first);
   
    first = reverse(first);
    traversal(first);    

    return 0;
}