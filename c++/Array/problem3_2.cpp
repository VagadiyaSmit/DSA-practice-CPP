#include <iostream>
#include <utility>
#include <vector>
#include<string>
using namespace std;

bool palindrome(string s){ //T.C = O(n) S.C = O(1)
    int start = 0;
    int end = s.length() - 1;
    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s = "Hello World!";
    int n = s.length();

    if(palindrome(s)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}