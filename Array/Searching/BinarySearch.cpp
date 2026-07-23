/*
    In this algorithm we find mid and compair mid with the given number if equal then return index otherwise if number>mid then move low= mid+1 else high=mid-1, and do this same thing while start<=end;

    Time Complexity : 
    . Best case: O(1)
    . Worst Case: (log n)

    // Aarray must be sorted
*/

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start =0;
    int end= n-1;

    while(start<=end){
        int mid =(start+end)/2;

        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int main(){
    int arr[1000], n, key;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter element of array: ";
    for(int i=0; i<n ;i++)
    cin>>arr[i];
    cout<<"Enter number to find: ";
    cin>>key;

    cout<< BinarySearch(arr, n, key);
    return 0;    
}