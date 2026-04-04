#include<iostream>
using namespace std;

pair<int , int >sum (vector<int> &arr , int target) {
    unordered_map<int, int>mpp;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        int complement = target - arr[i];

        
        if (mpp.find(complement)!=mpp.end()){
            return {complement , arr[i]};
        }
        mpp[arr[i]] = i;

    }
return {-1, -1};
}

int main (){
    vector<int>arr = {3,2,4};
    int target = 6;
    pair<int , int>res = sum(arr, target);
    cout<<res.first<<" "<<res.second;
}