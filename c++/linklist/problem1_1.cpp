#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

int main(){
    //create nodes
    Node * first = new Node{1,NULL};
    Node * second = new Node{1,NULL};
    Node * third = new Node{1,NULL};
    Node * fourth= new Node{1,NULL};
    // connect nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    
    //traverse and print
    Node* temp = first;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }


    return 0;
}