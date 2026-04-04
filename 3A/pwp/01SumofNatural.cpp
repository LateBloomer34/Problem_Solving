#include<iostream>
using namespace std;

int sum (int n ){
    int result = 0 ;
    if (n== 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        result = n*(n+1)/2;
    }
    return result;
}

int main (){
    int n = 5;
    cout<<sum(n);
}
