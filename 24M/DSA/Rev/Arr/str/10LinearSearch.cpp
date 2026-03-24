#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr , int target){
    int n = arr.size();
    for (int i = 0 ; i< n ; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {5,4,3,2,1};
    int target = 5;
    cout<< search(arr , target);
}