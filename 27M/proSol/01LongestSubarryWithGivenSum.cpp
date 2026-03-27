#include<iostream>
using namespace std;

int maxSub(vector<int>nums , int k){
    int n = nums.size();

    int right = 0 ; 
    int left = 0 ;

    int sum = 0 ; 
    int sub = 0 ; 


    while(right<n){
            sum = sum +nums[right];

            while(sum>k&&left<right){
                sum = sum-nums[left];
                left++;
            }
            if (sum==k){
                sub = max(sub , right-left+1);
            }

            right++;
    }
    return sub;
}

int main (){
    vector<int>nums = {10,5,2,7,1,9};
    int k = 15;
    cout<<maxSub(nums , k);
}