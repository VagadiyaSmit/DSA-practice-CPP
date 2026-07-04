// variable window
//give an array of positive number ,find the minimun length subarray whose sum is >= target

#include <iostream>
#include<algorithm>
using namespace std;

int minimunLengthSubarray(int arr[],int target,int n){ // T.C = O(n)  S.C = O(1)
    int start = 0;
    int sum = 0;
    int minlength = n+1;
    for(int end = 0; end < n; end ++){    //O(n)
        sum += arr[end];
        while(sum >= target){
            minlength = min(minlength,end - start +1);
            sum -= arr[start];
            start++;
        }
    }
    if(minlength == n+1)
        return 0;    // No Valid Subarray Found
    return minlength;

}
 
int main(){
    int arr[] = {2,3,1,2,4,3};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << minimunLengthSubarray(arr,target,n) << endl;  //k = 2 //{4,3}
    return 0;
}