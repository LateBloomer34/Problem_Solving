#include<iostream>
#include<vector>
using namespace std;

void unionArr(vector<int> &arr1 , vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0 ; 

    vector<int>result;
    while(i < n && j<m){
       if(arr1[i]<arr2[j]){
        if (result.empty() || result.back()!=arr1[i]){
            result.push_back(arr1[i]);
        }
        i++;
       }
       else if (arr2[j]<arr1[i]){
        if (result.empty() || result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++; 
       }
       else{
        if (result.empty() || result.back()!=arr2[j]){
            result.push_back(arr1[i]);
        }
        i++;
        j++;
       }
    }

    while(i<n){
        if (result.empty() || result.back()!=arr1[i]){
            result.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if (result.empty() || result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    

    for (int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
}


int main (){
    vector<int>arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int>arr2 = {2,3,4,4,5,11,12};
    unionArr(arr1 , arr2);
}