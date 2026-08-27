#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int x){
    if(start>end)
    return 0;

    int mid = start+ (end-start)/2;

    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return binarySearch(arr, mid+1, end, x);
    else
    return binarySearch(arr, start, mid-1, x);
}

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6 ,7, 8};
    int x =62;
    cout<<binarySearch(arr, 0, 7, x);

}