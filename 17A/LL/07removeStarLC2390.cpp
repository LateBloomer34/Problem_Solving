#include<iostream>
using namespace std;

int rem (string &s){
    int n = s.size();
    int j = 0;
    for (int i = 0 ; i < n ; i++){
    if (s[i]!='*'){
        swap(s[i], s[j]);
        j++;
    }
    else{
        if (j>0){
        j--;
        }
    }
    }
    return j;
}

int main (){
    string s = "erase*****";
    int k = rem(s);


   for (int i = 0 ; i < k ; i++){
    cout<<s[i];
   }
}