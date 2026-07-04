//find length of longst sub array

#include <iostream>
using namespace std;
int longestSubarray(int arr[],int n){
    int currFreq = 1;
    int maxFreq = 1;
    for(int i = 0;i < n;i++){
        if(arr[i] == arr[i-1]){
            currFreq++;
        }
        else{
            if(currFreq > maxFreq){
                maxFreq = currFreq;
            } 
            currFreq = 1;
        }      
    }
    if(currFreq > maxFreq){
        maxFreq = currFreq;
    }
    return maxFreq; 

}
int main(){
    int arr[]= {1,1,2,2,2,3,1,1};
    int n = sizeof(arr)/sizeof(int);
    cout << "Longest length "<< longestSubarray(arr,n);
    return 0;
}