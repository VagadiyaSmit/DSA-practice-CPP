// in array find & print min & max element

#include<iostream>
using namespace std;
void findMinMax(int arr[],int n){
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]< min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "MIN ="<< min << endl;
    cout << "MAX ="<< max << endl;
} 
int main(){
    int arr[]= {5,6,3,7,9,2};
    int n = sizeof(arr)/sizeof(int);
    findMinMax(arr,n);
    
    return 0;
}