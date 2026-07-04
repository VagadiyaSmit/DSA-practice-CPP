#include <iostream>
using namespace std;

bool subsetSum(int arr[],int n,int i,int target){
    if(target == 0){
        return true;
    }
    if(i == n){
        return false;
    }
    bool include = subsetSum(arr,n,i+1,target-arr[i]);
    bool exclude = subsetSum(arr,n,i+1,target);
    return include || exclude;
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    cout << (subsetSum(arr,n,0,target)? "true" : "false");
    return 0;
}