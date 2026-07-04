//in array number of k,find maximum sum of any subarray of size k
#include<algorithm>
#include<iostream>
using namespace std;

int maximumSubArrayOfK1(int arr[],int n,int k){ // brute - force approach T.C = O(n*k) S.C = O(1)
    int maxSum = 0;
    
    for(int i = 0;i < n;i++){
        int currSum = 0;
        for(int j = i;j <= i+k-1 && j<n;j++){
            currSum += arr[j];
        }
        maxSum = max(maxSum,currSum);
        
    }
    return maxSum;
}

int maximumSubArrayOfK2(int arr[],int n,int k){//sliding window approach T.C = O(n) S.C = O(1)
    int windowSum = 0;
    for(int i = 0; i<k;i++){  // O(k)
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for(int i = k; i < n;i++){  //O(n-k)
        windowSum = windowSum + arr[i] - arr[i-k];
        maxSum = max(maxSum,windowSum);
    }
    return maxSum;
}
int main(){
    int arr[] = {2,1,5,1,3,2};
    int k = 3;
    int n = sizeof(arr)/sizeof(int);
    cout << maximumSubArrayOfK1(arr,n,k) << endl;
    cout << maximumSubArrayOfK2(arr,n,k) << endl;
    return 0;
}