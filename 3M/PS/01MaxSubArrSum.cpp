#include<iostream>
using namespace std;

int maxSumArr(vector<int>arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;

    for (int i = 0 ; i < n ; i++){
        sum = sum+arr[i];
        maxSum = max(maxSum,sum);

        if (sum<0){
            sum = 0 ;
        }
    }
    return maxSum;
}

int main (){
    vector<int>arr = {2, 3, 5, -2, 7, -4};
    cout<<maxSumArr(arr);
}