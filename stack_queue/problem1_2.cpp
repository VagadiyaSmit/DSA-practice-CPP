//implementing queue using two stack
#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
    stack<int> input;
    stack<int> output;
public:
    void enqueue(int x) {   //T.C = O(1)  S.C = O(n)
        input.push(x);
    }
    int dequeue() {   //T.C = O(1) amortized  S.C = O(n)
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int value = output.top();
        output.pop();
        return value;
    }
};
int main(){
    MyQueue q;

    q.enqueue(1);
    q.enqueue(2);
    
    cout << q.dequeue() << endl; // return 1

    q.enqueue(3);
    cout << q.dequeue() << endl; // return 2
    return 0;
}