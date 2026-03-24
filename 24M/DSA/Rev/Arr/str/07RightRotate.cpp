#include<iostream>
using namespace std;

void rRotate(vector<int>arr){
    int n = arr.size();
    int temp = arr[n-1];
    for (int i = n-2 ; i >=0 ; i--){
        arr[i+1]=arr[i];
    }
    arr[0] = temp;
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
}

int main (){
    vector<int>arr = {1,2,3,4,5};
    rRotate(arr);
}