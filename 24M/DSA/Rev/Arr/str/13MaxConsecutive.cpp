#include<iostream>
using namespace std;

int maxOccur(vector<int>arr){
    int n = arr.size();
    
    int maxi= 0;
    int maxOne = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]== 1){
            maxi++;
            maxOne = max(maxOne, maxi);
        }
        else{
            maxi= 0 ;  
        }
    }
    return maxOne;
}

int main (){
    vector<int>arr = {1, 0, 1, 1, 0, 1};
    cout<<maxOccur(arr);
}