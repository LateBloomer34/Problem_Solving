#include<iostream>
using namespace std;

void rRotate(vector<int>&arr , int k){
    int n = arr.size();

    if (n==0){
        return;
    }
    k = k%n;

    if (k==0){
        return;
    }
    vector<int>temp(k);
    for (int i = n-k ; i<n; i++){
        temp[i-(n-k)] = arr[i];
    }

    for (int i = n-k-1 ; i>=0 ; i--){
        arr[i+k]=arr[i];
    }

    for (int i = 0 ; i<k ; i++){
        arr[i] = temp[i];
    }

   
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int k = 1;
    rRotate(arr, k);
     for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}