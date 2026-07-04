#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

bool detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast ->next != NULL){
        slow = slow ->next;
        fast = fast ->next->next;
    
        if(slow == fast){
            return true;
        }
       
    }
    return false;
}

int main(){
    Node* first = new Node{1,NULL};
    Node* second = new Node{2,NULL};
    Node* third = new Node{3,NULL};
    Node* fourth = new Node{4,NULL};
    Node* fifth = new Node{5,NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
   
    fifth->next = second;

    if(detectCycle(first)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}