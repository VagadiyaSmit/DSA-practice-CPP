// Two Pointer : Squares of Sorted Array
#include <iostream>
#include <vector>
using namespace std;

vector <int> sortedSquares(vector <int> arr){   // T.C = O(n)  S.C = O(n)
    int n  = arr.size();
    vector <int> result(n); //S.C = O(n)

    int left = 0, right = n-1;   //T.C = O(n)
    int pos = n-1;

    while( left <= right){
        int leftSq = arr[left] * arr[left];
        int rightSq = arr[right] * arr[right];
        if(leftSq > rightSq){
            result[pos] = leftSq;
            left++;
        } else{
            result[pos] = rightSq;
            right--;
        }
        pos--;
    }
    return result;
}

int main(){
    vector <int> arr = {-4,-2,0,1,3};
    vector <int> ans = sortedSquares(arr);

    for(int x : ans){
        cout << x << " ";  // 0 1 4 9 16
    }
    cout << endl;
    return 0;
}