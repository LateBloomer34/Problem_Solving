#include<iostream>
using namespace std;

void sum(vector<int>& arr , int target){
    int n = arr.size();
    
    
    // brute approach - using sorting but here space complexity is O(1)
    // sort(arr.begin() , arr.end());
    // int start = 0 ;
    // int end = n-1;
    // while(start<=end){
    //     if (arr[start]+arr[end]<target){
    //         start++;
    //     }
    //     else if (arr[start]+arr[end]>target) {
    //         end--;
    //     }
    //     else{
    //         cout<<arr[start]<<" "<<arr[end]<<endl;
    //         start++;
    //         end--;
            
    //     }
    // }


    // optimal approach - using hasmap

    unordered_map<int , int>mpp;

    for (int i = 0 ; i < n ; i++){
        int complement = target - arr[i];
        if (mpp.find(complement)!=mpp.end()){
            cout<<complement<<" "<<arr[i]<<endl;
            return;
        }

        mpp[arr[i]]=i;
    }

}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 10;
    sum(arr , target);
}