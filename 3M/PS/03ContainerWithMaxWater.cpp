#include<iostream>
using namespace std;

int maxWater(vector<int>arr){
    int n = arr.size();

    int start = 0;
    int end = n-1;
    
    int maxWater = 0;

    while(start<end){
        int width = end-start; //8
        int height = min(arr[start], arr[end]); //1
        int waterArea = width * height; //8

        maxWater = max(maxWater, waterArea);

        if (arr[start]<arr[end]){
            start++;
        }
        else{
            end--;
        }
    }
    return maxWater;
}

int main (){
    vector<int>arr = {1,8,6,2,5,4,8,3,7}; //0-9
    cout<<maxWater(arr);
}