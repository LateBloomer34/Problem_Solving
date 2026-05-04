#include<iostream>
using namespace std;

pair<int , int>SubArray(vector<int>arr){
    int n = arr.size();
    int start = -1;
    int end = -1;
    int sum = 0;
    int tempStart = 0;
    int maxSum = INT_MIN;

    for (int i = 0 ;i < n ; i++){
        sum = sum+arr[i];

        if (sum>maxSum ){
            maxSum = sum;
            start = tempStart;
            end = i;
        }

        if(sum<=0){
            sum = 0;
            tempStart= i+1;
        }
    }
    cout<<maxSum<<" "<<endl;
    return {start , end};
}

int main (){
    vector<int>arr = {2, 3, 5, -2, 7, -4};
    pair<int, int >res = SubArray(arr);
    cout<<res.first<<" "<<res.second;
}