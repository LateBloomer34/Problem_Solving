#include<iostream>
using namespace std;


bool search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size()-1;

        while(start<=end){
            int mid = start+(end-start)/2;
            // when target found
            if (arr[mid]==target){
                return true;
            }
            // duplicate case

            if (arr[start]== arr[mid] && arr[mid]== arr[end]){
                start++;
                end--;
            }

            // if left half sorted
            else if (arr[start]<=arr[mid]){
                if (target>=arr[start] && target<arr[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                if (target>arr[mid]&& target<=arr[end]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return false;
    }


int main (){
    vector<int>arr = {5,6,7,0,1,2,2,3};
    int target = 12;
    search(arr, target);
    if (search(arr, target)){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
}