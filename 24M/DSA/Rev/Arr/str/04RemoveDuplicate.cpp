#include<iostream>
using namespace std;

int removeDupli(vector<int>&arr){
    int n = arr.size();
    int j = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]!=arr[j]){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    return j+1;
}

int main (){
    vector<int>arr = {1,1,1,2,2,3,3,3,3,4,4};
    int j = removeDupli(arr);
    for (int i = 0 ; i <j ; i++){
        cout<<arr[i]<<" ";
    }
}