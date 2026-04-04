#include<iostream>
using namespace std ;

vector<int> twoSum (vector<int>&arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    while(start<end){
        if (arr[start]+arr[end]>target){
            end--;
        }
        else if (arr[start]+arr[end]<target){
            start++;
        }
        else{
            return {start+1, end+1};
        }
    }
    return {-1,-1};
}

int main (){
    vector<int>arr ={2,7,11,15};
    int target = 9;
    vector<int>res = twoSum(arr, target); 
    for (int i = 0 ; i < res.size() ; i++){
        cout<<res[i]<<" ";
    }
}