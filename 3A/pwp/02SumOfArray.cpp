#include<iostream>
using namespace std;


// normal method
// int sum (vector<int>arr){
//     int n = arr.size();
//     if (n ==0){
//         return 0;
//     }
//     int sum = 0 ;

//     for (int i = 0 ; 
//     i < n ; i ++){
//         sum = sum+arr[i];
//     }
//     return sum;
// }

// using 2 pointer


int sum(vector<int>arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    

    if (n == 0  ){
        return 0;
    }

    int sum = 0;
    while(start<end){
        sum = sum+ arr[start]+arr[end];
        start++;
        end--;
    }
    
    if (n%2!=0){
        sum = sum+arr[start];
    }
return sum;
}

int main (){
    vector<int>arr = {1,2,4,5,4,5,6};
    cout<<sum(arr);
}