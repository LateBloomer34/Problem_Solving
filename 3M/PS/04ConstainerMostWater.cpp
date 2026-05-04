//container with max Water


#include<iostream>
using namespace std;

int maxWater(vector<int>arr){
    int n = arr.size();

    int start = 0 ;
    int end = n-1;

    int maxWater = 0 ;


    while(start<end){


        // approach -  calculate the width of conatiner and find the less height container in both.
        // calculate the area of that container with height and width for capacity.
        int width = end - start;
        int height = min(arr[start], arr[end]);
        int area = width*height;


        // compare with the maxwater 
        maxWater = max(maxWater, area);

//move the pointer
        if (start<end){
            start++;
        }
        else{
            end--;
        }
    }
    return maxWater;
}


int main (){
    vector<int>arr = {1,8,6,2,5,4,8,3,7};
    cout<<maxWater(arr);
}