 // prefix sum : Left Sum Equals Right Sum
#include <iostream>
#include <vector>
using namespace std;

int findEqualPoint(vector<int>& arr){
     int n = arr.size();
    //step 1 : calculate total sum
    int totalSum = 0;
    for(int i = 0;i < n; i++){
        totalSum += arr[i];
    }
    //step 2 : traverse & check
    int leftSum = 0;
    for(int i = 0; i<n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i; //found the index
        }
        leftSum += arr[i];
    }
    return -1;
}
int main(){
    vector <int> arr1 = {1,2,3,4,5,6};
   
    cout << findEqualPoint(arr1)<< endl;
    vector <int> arr2 = {1,2,3};
    cout << findEqualPoint(arr2);
    return 0;
}