#include<iostream>
using namespace std;

int traverse(vector<int>arr){
    int n = arr.size();
    int largest = INT_MIN;
    for (int i= 0; i < n ; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main (){
    vector<int>arr = {8, 10, 5, 7, 9};
    cout<<traverse(arr);
}