#include<iostream>
using namespace std;

bool twoSum(vector<int>arr  , int target){
    int n = arr.size();

    int l = 0;
    int r = n-1;
    int sum = 0 ;

    while(l<r){
        int sum = arr[l]+arr[r];
        if (sum<target){
            l++;
        }
        else if (sum>target){
            r--;
        }
        else{
            return true;
        }
    }
    return false;
}

int main (){
    vector<int>arr  = {2,6,5,8,11};
    int target = 14;
    twoSum(arr , target);

    if(twoSum(arr , target)){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
}