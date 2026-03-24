#include<iostream>
using namespace std;

bool sorted(vector<int>arr){
    bool asc = true;
    bool desc = true;
    
    for (int i = 1 ; i < arr.size(); i++){
        if (arr[i]<arr[i-1]){
            desc = false;
        }
        if (arr[i]>arr[i-1]){
            asc = false;
        }
    }
    return asc||desc;
}

int main (){
    vector<int>arr = {5,4,3,2,1};
    if (sorted(arr)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array not sorted";
    }
}