#include<iostream>
using namespace std;

void lRotate(vector<int>&arr, int k){
    int n = arr.size();
    k= k%n;
    vector<int>temp(k);
    for (int i = 0 ; i <k ; i++ ){
        temp[i]=arr[i];
    }
    
    for (int i = k ; i < n ; i++){
        arr[i-k]=arr[i];
    }

    for (int i = n-k ; i<n ; i++){
        arr[i] = temp[i-(n-k)];
    }
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int pos = 3;
    lRotate(arr , pos);

    for (int i = 0 ; i <arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}