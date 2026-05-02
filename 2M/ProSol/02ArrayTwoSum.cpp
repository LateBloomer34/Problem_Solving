#include<iostream>
using namespace std;
#include<unordered_map>

pair<int, int> twoSum(vector<int>arr , int target){
    int n = arr.size();

    unordered_map<int, int>mpp;

    for (int i = 0 ; i < n ; i++){
        int complement = target - arr[i];
        if (mpp.find(complement)!=mpp.end()){
            return {complement, arr[i]};
        }
        mpp[arr[i]]=i;
    }
    return {-1,-1};
}

int main (){
    vector<int> arr = {2,7,11,15};
    int target = 26;
    pair<int , int>result = twoSum(arr , target);
    cout<<result.first<<" "<<result.second;
}

