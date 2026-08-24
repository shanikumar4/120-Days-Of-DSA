#include<iostream>
using namespace std;

int minelement(int arr[], int index, int n){

    if(index==n-1)
    return arr[index];

    return min(arr[index], minelement(arr, index+1, n));

}

int main(){
    int arr[]= {6,2,3,4,5};

    cout<<minelement(arr,0,  5);
    return 0;
}