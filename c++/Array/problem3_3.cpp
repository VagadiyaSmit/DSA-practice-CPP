#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> leftandRightelementSum(int arr[], int n, int target) {  //T.C = O(n) S.C = O(1)
    vector<int> result;
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int sum = arr[start] + arr[end];
        result.push_back(sum);
        start++;
        end--;
    }
    return result;
}

int main() {
    int arr[] = {3,1,4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = leftandRightelementSum(arr, n, 0);

    for (int sum : ans) {
        cout << sum << " ";
    }
    cout << endl;
    
    return 0;
}