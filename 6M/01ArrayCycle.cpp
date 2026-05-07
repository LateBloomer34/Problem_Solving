#include<iostream>
using namespace std;

// bool cycle(vector<int>arr){
//     int n = arr.size();
//     if (n<=1){
//         return false;
//     }
//     if (arr[0]>arr[1]){
//         for (int i = 1 ;  i< n; i++){
//         if (arr[i]>arr[i-1]){
//             return false;
//         }    
//         }
//     }
//     else{
//         for (int i = 1 ;  i< n; i++){
//         if (arr[i]<arr[i-1]){
//             return false;
//         }    
//         }
// }
//     return true;
// }

bool cycle(vector<int> & arr){
    int n = arr.size();
    if (n<=1){
        return true;
    }

    int count = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]>arr[(i+1)%n]){
            count++;
        }
    }
    if (count<=1){
        return true;
    }
    return false;
}

int main (){
    vector<int>arr = {2,1,3,4};
    bool result = cycle(arr);
    if (result){
        cout<<"rotated";
    }
    else{
        cout<<"not rotated";
    }
}