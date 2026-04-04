#include<iostream>
using namespace std;

// // need to return pair of index which sum is equals to target;
// pair<int, int> sum (vector<int>&arr, int target){
//         int n = arr.size();
//     int start = 0 ;
//     int end = n-1;
//     pair <int , int>result = {-1,-1};
//     while(start<end){
//         if (arr[start]+arr[end]>target){
//             end--;
//         }
//         else if (arr[start]+arr[end]<target){
//             start++;
//         }
//         else{
//             result = {start, end};
//             // cout<<result.first<<" "<<result.second<<endl;
//             start++;
//             end--;
//         }
//     }
//     return result;
// }


// need to return pair of element which sum is equals to target;
pair<int, int> sum (vector<int>&arr, int target){
        int n = arr.size();
    int start = 0 ;
    int end = n-1;
    pair <int , int>result = {-1,-1};
    while(start<end){
        if (arr[start]+arr[end]>target){
            end--;
        }
        else if (arr[start]+arr[end]<target){
            start++;
        }
        else{
            result =   {arr[start], arr[end]};
            start++;
            end--;
            // return result;
        }
    }
    return result;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    int target = 5;
    pair<int , int>res = sum(arr, target);
    cout<<res.first<<" "<<res.second;
}