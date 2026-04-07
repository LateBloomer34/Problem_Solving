#include<iostream>
using namespace std;
#include<climits>


pair<int, int> maxSubArray(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    int maxSum = INT_MIN;
    int start = 0;
    int end = 0;
    int tempStart = 0;
    for (int i = 0; i< n ; i++){
        sum = sum +arr[i];
        if (sum>maxSum){
            maxSum = sum;
            start = tempStart;
            end = i;
        }

        if (sum <0){
            sum = 0;
            tempStart = i+1;
        }

    }
    cout<<"maxSum of array is "<<maxSum<<endl;
    return {start , end};
}

int main (){
    vector<int>arr = {2, 3, 5, -2, 7, -4};
   pair<int, int>result = maxSubArray(arr);


   cout<<result.first<<" "<<result.second<<endl;
}