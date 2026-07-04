#include <iostream>
#include <vector>
using namespace std;

void printAllSubset(int arr[],vector <int>& ans,int i,int n,vector <vector<int>>& allSubset){
    if(i == n){
        allSubset.push_back(ans);
        return;
    }
    ans.push_back(arr[i]);
    printAllSubset(arr,ans,i+1,n,allSubset);
    ans.pop_back();
    printAllSubset(arr,ans,i+1,n,allSubset);
}

int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> ans;
    vector <vector<int>> allSubset;
    printAllSubset(arr,ans,0,n,allSubset);

    for(auto subset : allSubset){
        cout << "[";
        for(int i = 0; i < subset.size();i++){
            cout << subset[i];
            if( i < subset.size()-1){
                cout << ",";
            }
        }
        cout << "]";
    }
    return 0;
}