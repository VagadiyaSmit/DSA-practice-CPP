//next greater element
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector <int> nextGreater(vector <int> &arr){   //T.C = O(n)  S.C = O(n)
    int n = arr.size();
    vector <int> ans(n);
    stack <int> st;
    for(int i = n-1;i >= 0;i--){
        while(!st.empty() && st.top() <= arr[i]){
           
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    vector <int> arr = {4,5,2,10,8};
    vector <int> ans = nextGreater(arr);
    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}