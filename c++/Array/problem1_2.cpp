//(two pointer approach)
//for given sorted array find the sum pair this is equal to target 
#include<iostream>
using namespace std;

void findSum(int arr[],int n,int target){
    int i = 0,j = n-1;
    while(i < j){
        int sum = arr[i]+arr[j];
        if(sum == target){
            cout<< arr[i] << "+" << arr[j]<< endl;
            i++; 
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
}
int main(){
    int arr[]= {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(int);
    int target = 10;
    findSum(arr,n,target);
    return 0;
}