#include<iostream>
using namespace std;

int maxSubArray(vector<int> &arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0 ; i<n ; i++){
        sum = sum+arr[i];
        maxSum = max(sum, maxSum);
        if (sum <0){
            sum = 0;
        }
    }
    return maxSum;
}

int main (){
    vector<int>arr = {-2, -3, -7, -2, -10, -4};
    cout<<maxSubArray(arr);
}