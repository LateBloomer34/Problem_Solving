#include<iostream>
using namespace std;

int sLargest(vector<int>arr){
    int n = arr.size();
        int largest = -1;
        int sec = -1;

        for (int i = 0 ; i < n ; i++){
            if (arr[i]>largest){
                sec= largest;
                largest = arr[i];
            }
        }
        for (int i = 0 ; i < n ; i++){
            if (arr[i]>sec && arr[i]<largest){
                sec = arr[i];
            }
        }

    return sec;
}

int main (){
    vector<int>arr = {1};
    cout<<sLargest(arr);
}