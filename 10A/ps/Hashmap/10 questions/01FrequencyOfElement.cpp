#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

void freq(vector<int> &arr){
    int n = arr.size();
    unordered_map<int, int>mpp;

    for (int i = 0 ;i < n ; i++){
        mpp[arr[i]]++;
    }

    //renge based loop 
    // it = direct copy of each element
    // every iterator is key v alue pair , and type of it is pair
    for(auto it: mpp){
        cout<<it.first <<" "<<it.second<<endl;
    }

    //iterator loop
    // iterator is poiter like object here
    for(auto it = mpp.begin() ; it!=mpp.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

int main (){
    vector<int>arr = {1,2,2,3,3,3};
    freq(arr);
}