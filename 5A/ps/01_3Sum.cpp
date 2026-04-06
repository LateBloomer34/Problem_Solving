#include<iostream>
using namespace std;
#include<vector>

void sum(vector<int>&arr){
    int n = arr.size();

    for (int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            for (int k = j+1 ; k<n ; k++){
                if (arr[i]+arr[j]+arr[k]==0){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main (){
    vector<int>arr = {-1,0,1,2,-1,-4};
    sum(arr);
}