#include<iostream>
using namespace std;

int appearOnce(vector<int>arr){
    int n = arr.size();
    int ele = 0;
    for (int i = 0 ; i <n ; i++){
        ele = ele^arr[i];
    }
    return ele;
}

int main (){
    vector<int>arr = {4,1,2,1,2};
    cout<<appearOnce(arr);
}