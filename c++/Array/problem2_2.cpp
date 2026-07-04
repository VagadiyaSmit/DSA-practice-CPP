//in array of 0s & 1s,a k number,find the maximum number of 1s in k size window
#include<algorithm>
#include <iostream>
using namespace std;
int noOfOneSinK(int arr[],int k ,int n){ //T.C = O(n)  S.C = O(1)
    
    int noOfONEs = 0;
    for(int i = 0 ; i < k;i++){
        if(arr[i] == 1) noOfONEs++;
    }
    int count = noOfONEs;

    for(int i = k;i < n;i++){
        noOfONEs += arr[i];
        noOfONEs -= arr[i - k];
        count = max(count,noOfONEs);
    }
   
    return count;
}
int main(){
    int arr[] = {1,0,1,1,0,1};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << noOfOneSinK(arr,k,n)<< endl; 
    return 0;
}