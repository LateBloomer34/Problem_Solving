#include<iostream>
using namespace std;

int removeDupli(vector<int> &arr){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int j = 0 ;
    int i = 0;

    while(i<n){
        if (arr[i]!= arr[j]){
            j++;
            swap(arr[i] , arr[j]);
        }
        i++;
    }
    return j ;
}

int main (){
    vector<int>arr = {0,1,1,4,5,2,3,3,3,4,5,5,6};
    int result = removeDupli(arr);

    for (int i = 0 ; i <=result ; i++ ){
        cout<<arr[i]<<" ";
    }
}