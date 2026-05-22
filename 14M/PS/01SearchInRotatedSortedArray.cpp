#include<iostream>
using namespace std;

int search(vector<int>& arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        //when target found
        if (arr[mid]== target){
            return mid;
        }

        // if left half sorted
        if (arr[start]<=arr[mid]){
            if(target>=arr[start]&& target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        // if right half sorted

        else {
            if (target>arr[mid]&& target<=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(arr , target);
}