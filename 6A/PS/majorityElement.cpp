#include<iostream>
using namespace std;

void majority(vector<int> &arr){
    int n = arr.size();
    int count = 0;
    int majority = 0;
    for (int i = 0 ; i <n ; i++){
        if (count ==0){
            majority = arr[i];
        }
        if (arr[i]== majority){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<majority;

}

int main (){
    vector<int>arr = {3,2,3};
    majority(arr);
}