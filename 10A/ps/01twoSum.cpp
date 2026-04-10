#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

void twoSum(vector<int>&arr , int target){
    int n = arr.size();
    unordered_map<int , int>mpp;

    for (int i = 0 ; i <n ; i++){
        int comple = target - arr[i];
        if (mpp.find(comple)!=mpp.end()){
            cout<<comple<<" "<<arr[i]<<endl;
        }
        mpp[arr[i]] = i;
    }
}


int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 9;
    twoSum(arr , target);
}