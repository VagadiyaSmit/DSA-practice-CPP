//Sum of Digits
#include <iostream>
using namespace std;

int sumofDigit(int n){    //T.C = O(log n)  S.C = O(log n)
    if(n == 0){     //base case
        return 0;
    }
    return (n % 10) + sumofDigit(n/10);  //last digit + rest
}
int main(){
    int n; // 1234
    cin >> n;
    cout << "sum of digit is "<< sumofDigit(n) << endl;
    return 0;
}
