// prefix sum : count even in range 
                                // ARRAY     :   [2,3,4,6,1,8]
#include <iostream>          //  array isEven :  [1,0,1,1,0,1]
#include <vector>               //   even sum :  [1,1,2,3,3,4]
using namespace std;

int main(){

    vector <int> arr = {2,3,4,6,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Step 1 : Build even prefix array
    vector <int> evenPrefix(n);
    evenPrefix[0] = (arr[0] % 2 == 0) ? 1 : 0;

    for (int i = 1;i < n;i++){                     // T.C = O(n) build O(1) per query
        int isEven = (arr[i] % 2 == 0) ? 1 : 0;    // S.C = O(n)
        evenPrefix[i] = evenPrefix[i-1] + isEven;
    }
    // Step 2 : Answer query [L,R]
    int L = 1, R = 4;
    int result;
    if(L == 0){
        result = evenPrefix[R];
    } else {
        result = evenPrefix[R] - evenPrefix[L-1];
    }
    cout << "Even count in range : " << result << endl;  //2

    return 0;
}