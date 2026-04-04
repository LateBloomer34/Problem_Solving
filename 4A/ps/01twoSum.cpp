#include<iostream>
using namespace std;

void sum (vector<int>&arr , int target ){
    int n = arr.size();
    unordered_map<int , int>mpp;

    for (int i = 0 ; i < n ; i++){
        int complement = target - arr[i];
        if (mpp.find(complement)!=mpp.end()){
            cout<<complement<<" "<<arr[i]<<endl;
        }

        mpp[arr[i]] = i;
    }
}

int main (){
    vector<int>arr = {1,2,3,4,5,7,6};
    int target = 9;
    sum(arr, target);
}