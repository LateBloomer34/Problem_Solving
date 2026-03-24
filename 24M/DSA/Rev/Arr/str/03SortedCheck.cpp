#include<iostream>
using namespace std;

bool sorted(vector<int>arr){
    int n = arr.size();

    for (int i = 1 ; i < n ; i++){
        if (arr[i]<arr[i-1]){
            return false;
        }
}


    return true;
}

int main (){
    vector<int >arr = {5,4,6,7,8};
    if (sorted(arr)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array not sorted";
    }
}