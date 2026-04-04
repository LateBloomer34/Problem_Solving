#include<iostream>
using namespace std;

void sorted(vector<int>arr){

    int n = arr.size();

    for (int i = 0 ; i < n ; i++){
        arr[i] = arr[i]*arr[i];
    }   
    vector<int>res(n, 0);
    
    int start = 0 ;
    int end = n-1;
    for(int i = 0 ; i < n ; i++){
        if (arr[end]>arr[start]){
            res[i] = arr[end];
            end--;
        }
        else{
            res[i] = arr[start];
            start++;
        }
    }
    reverse(arr.begin(), arr.end());

    for (int i = 0 ; i < n ; i++){
        cout<<res[i]<<" ";
    }

}

int main (){
    vector<int>arr = {-7,-4,-2,0,2,5,11};
    sorted(arr);
}