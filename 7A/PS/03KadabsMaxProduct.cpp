#include <iostream>
using namespace std;
#include<vector>
#include<climits>

int maxProduct(vector<int>&arr){
    int n = arr.size();
    // int minPro = 1;
    // int maxPro =1;
    // int result = arr[0];

    // for (int i = 0 ; i < n ; i++){
    //     if (arr[i]<0){
    //         swap(maxPro , minPro);
    //     }
    //     maxPro = max(maxPro, (arr[i]*maxPro));
    //     cout<<"maxPro "<<maxPro<<endl;
    //     minPro = min(minPro, (arr[i]*minPro));
    //     cout<<"minPro "<< minPro<<endl;
    //     result = max(result , maxPro);
    //     cout<<"result is "<<result<<endl;
    // }
    // return result;


    // other approach

    int maxi = INT_MIN;
    int mul = 1;
// prefix
    for (int i = 0 ; i < n ; i++){
        mul = mul*arr[i];
        maxi = max(mul, maxi);
        if (mul==0){
            mul = 1;
        }
    }
// suffix
     mul = 1;
    for (int i = n-1 ; i>=0 ; i--){
        mul = mul*arr[i];
        maxi = max(mul, maxi);
        if (mul==0){
            mul = 1;
        }
    }
    
    return maxi;
}

int main(){
    vector<int> arr = {-2,0,1 };
    cout<<maxProduct(arr);
}