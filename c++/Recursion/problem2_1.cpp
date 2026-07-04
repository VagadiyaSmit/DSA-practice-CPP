// recursion on arrays
// Array sum using recursion  (find the sum of all element in an array using recursion no loop)
#include <iostream>
using namespace std;

int arraySum(int arr[],int n){    // T.C = O(n)  S.C = O(n) call stack
    
    if(n == 0){
        return 0;
    }

    return arr[n-1]+arraySum(arr,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "array sum is"<< arraySum(arr,n);
    
    return 0;
}