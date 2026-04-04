#include<iostream>
using namespace std;

void prices (vector<int> &arr){
     int n = arr.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            j = i + 1;
            if (arr[i] < arr[j]) {
                j++;
            } 
            else {
                arr[i] = arr[i] - arr[j];
            
            }
        }

        for (int i = 0 ; i< n ; i++){
            cout<<arr[i]<<" ";
        }
}

int main (){
    vector<int>arr = {8,4,6,2,3};
    prices(arr);
}