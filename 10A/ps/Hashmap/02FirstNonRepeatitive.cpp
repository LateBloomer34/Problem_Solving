#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int firstNonRepeat(vector<int> &arr){
    int n = arr.size();
    unordered_map<int , int>mpp;
    for (int i = 0 ;  i < n ; i++){
        mpp[arr[i]]++;
    }

    // to find the frequency of element in an array
    // for(auto it=mpp.begin(); it!= mpp.end() ; it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
  
    for (int i = 0 ; i<n ; i++){
        if (mpp[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {1,1,2,2,3,9 ,4,5,5,6};
    cout<<firstNonRepeat(arr);
}