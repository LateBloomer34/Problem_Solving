#include<iostream>
#include<algorithm>
using namespace std;

int maxWater(vector<int> & arr){
    int n = arr.size();

    int start = 0 ;
    int end = n-1;
    int maxWat = 0;
    while(start<end){
        int width = end - start;
        int height = min(arr[start], arr[end]);
        int area = width*height;
        maxWat = max (maxWat , area);
        if (arr[start]<arr[end]){
            start++;
        }
        else{
            end--;
        }
    }
    return maxWat;
}

int main (){
    vector<int>arr = {1,1};
    cout<<maxWater(arr);
}