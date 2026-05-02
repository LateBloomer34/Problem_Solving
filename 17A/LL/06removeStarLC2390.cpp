#include<iostream>
using namespace std;

int remStar(string &s){
    int n = s.size();
    int j = 0 ;
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
    string s = "leet**cod*e";
    int res = remStar( s);
    for (int i = 0 ; i < res ; i++){
        cout<<s[i];
    }
}