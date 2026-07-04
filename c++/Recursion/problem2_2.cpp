// check if array is sorted or not using recursion
#include <iostream>
using namespace std;

bool ifArraySorted(int arr[],int n){   //T.C = O(n)  S.C = O(n)  call stack
    
    if(n == 0|| n == 1){
        return true;
    }
    if(arr[n-2] > arr[n-1]){
        return false; 
    }
    return ifArraySorted(arr,n-1);
}
int main(){
    int arr1[] ={1,2,3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "array 1 is sorted ?"<< ifArraySorted(arr1,n1) << endl;
    int arr2[] = {1,3,2,4};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "array 2 is sorted ?"<< ifArraySorted(arr2,n2)<< endl;
    return 0;
}