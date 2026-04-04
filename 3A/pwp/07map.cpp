#include<iostream>
using namespace std;
#include<unordered_map>

void mpp(vector<int>& arr){
    unordered_map<int, int>mp;
    int n = arr.size();
    for (int i = 0 ; i < n ; i++){
        mp[i] = arr[i];
    }

    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    
}

int main (){
    vector<int>arr = {4,2,8,5,1,6,7};
    mpp(arr);


}

