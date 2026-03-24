#include<iostream>
using namespace std;

void lRotate(vector<int> &arr){
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1 ; i < n ; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp;
}

int main (){
    vector<int>arr = {1,2,3,4,5};
    lRotate(arr);
    for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}