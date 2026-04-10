#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

void freq(vector<int>&arr){
    int n = arr.size();

    unordered_map<int , int>mpp;
    for (int i = 0 ; i < n ;i++){
        // to find the frequency of an element
        mpp[arr[i]]++;

        // mpp[arr[i]]= mpp[arr[i]]+1;
        // it is like insert mpp[5] in an empty map, so the value increse with 1, coz in ititilize it is empty, however mpp[5] comes , value increses with one coz mpp[arr[i]]++;
    }

    for(auto it = mpp.begin() ; it!= mpp.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl; 
    }
}

int  main (){
    vector<int>arr = {1,2,2,3,3,3,3,2,1,5,4,3,5};
    freq(arr);
}