#include <iostream>
#include <string>
using namespace std;

void printPermutations(string &s,int i){
    if(i == s.length()){
        cout << s << endl;
        return;
    }
    for(int j = i;j < s.length();j++){
        swap(s[i],s[j]);
        printPermutations(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s = "ABC";
    printPermutations(s,0);
    return 0;
}