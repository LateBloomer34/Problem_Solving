#include<iostream>
using namespace std;

void sorty(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin() , arr.end());
    reverse(arr.begin() , arr.end());

    for(auto x:arr){
        cout<<x<<" ";
    }
}

int main (){
    vector<int>arr = {7, 11 , 2, 5, 3};
    sorty(arr);
}