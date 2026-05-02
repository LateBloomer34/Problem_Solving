#include<iostream>
using namespace std;

int remStar(string &s){
    int n = s.size();

    int j = 0;
    for (int i = 0 ;i < n ; i++){
        if (s[i]!='*'){
            swap(s[i], s[j]);
            j++;
        }
        
    }
    return j;
}

int main (){
    string s = "leet**cod*e";
    int j = remStar(s);
    for (int i = 0; i< j ; i++){
        cout<<s[i];
    }
}