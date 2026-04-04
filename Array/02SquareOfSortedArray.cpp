#include<iostream>
using namespace std;

void sqre(vector<int>arr ){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    
    vector<int>result(n, 0);
    
    for (int i = 0 ; i< n ; i++){
        arr[i] = arr[i]* arr[i];
    }

    for (int i = 0 ; i < n ; i++){
        if (arr[start]>arr[end]){
            result[i] =arr[start];
            start++ ;
        }
        else{
            result[i] = arr[end];
            end--;
        }
    }

    reverse(result.begin() , result.end());
    for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
}

int main (){
    vector<int>arr = {-7,-3,2,3,11};
    sqre(arr);
}