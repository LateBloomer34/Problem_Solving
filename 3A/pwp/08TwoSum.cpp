#include<iostream>
using namespace std;

void sum(vector<int>arr , int target){
    int n = arr.size();

    // method 1 - using 2 point only for sorted array , if not sorted first sort thar array the use the 2 pointer 
// sort(arr.begin() , arr.end());

//     int start = 0 ;
//     int end = n-1;

//     while(start<end){
//         if (arr[start]+arr[end]>target){
//             end--;
//         }
//         else if (arr[start]+arr[end]<target){
//             start++;
//         }
//         else{
//             // cout<<arr[start]<<" "<<arr[end]<<endl;
//             cout<<start<<" "<<end<<endl;
//             start++;
//             end--;
            
//         }
//     }



// method 2 - using hasmap 
    unordered_map<int , int >mpp;
    for (int i = 0 ; i < n ; i++){
        int complement  = target - arr[i];

        if (mpp.find(complement)!= mpp.end()){
            cout<<mpp[complement] <<" "<<i<<endl;;
        }
        mpp[arr[i]] = i;
    }

}

int main (){
    vector<int>arr = {1,2,3,4,5,7,6};
    int target = 7;
    sum(arr , target);
}