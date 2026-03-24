#include<iostream>
using namespace std;

int missing(vector<int>arr ){
    int n = arr.size();

    int max = INT_MIN;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
cout<<"max element is "<<max<<endl;

int min = INT_MAX;
for (int i = 0 ; i<n ; i++){
    if (arr[i]<min){
        min = arr[i];
    }
}
cout<<"min ele is "<<min<<endl;
int totSum = 0;
for (int i = min ; i <=max ; i++ ){
totSum = totSum^i;
}
int eleSum = 0 ;
for (int i = 0 ; i <n ; i++ ){
eleSum = eleSum^arr[i];
}
int missing = totSum^eleSum;

return missing;
}


int main (){
    vector<int>arr = {8, 2, 4, 5, 3, 7, 1};
    cout<<missing(arr);
}