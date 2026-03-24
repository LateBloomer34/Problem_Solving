#include<iostream>
using namespace std;

void moveZero(vector<int>&arr){
    int n = arr.size();

    int j = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]!=0){
            if (i!=j){
            swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main (){
    vector<int>arr = {1,2,0,1,0,4,0};
    moveZero(arr);

    for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i];
    }
}