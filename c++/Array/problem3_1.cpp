//Given a sorted array, find all pairs that sum to a given target

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<pair<int,int>> pairOfSum(int arr[], int n, int target) {  //T.C = O(n) S.C = O(1)
    vector<pair<int,int>> result;
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == target) {
            result.emplace_back(arr[start], arr[end]);
            start++;
            end--;
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    vector<pair<int,int>> ans = pairOfSum(arr, n, target);

    if (!ans.empty()) {
        cout << "Pairs summing to " << target << ":\n";
        for (const auto& p : ans) {
            cout << p.first << " " << p.second << "\n";
        }
    } else {
        cout << "No pair found\n";
    }

    return 0;
}