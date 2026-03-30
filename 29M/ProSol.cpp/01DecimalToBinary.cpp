#include<iostream>
using namespace std;

void con(int num){
    if(num>0){
        con(num/2);
        int rem = num%2;
        cout<<rem;
    }
}

int main (){
    int num = 13;
    con(num);
}
