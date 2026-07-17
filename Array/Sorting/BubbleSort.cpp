/* time complexity : 
    best case: O(n)
    worst case: O(n^2)
*/

/* 
    if size of array =n, 
    no of rounds = n-1;
*/

#include<iostream>
using namespace std;

int main(){
    int arr[1000], n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n ;i++)
    cin>>arr[i];

    for(int i=n-2; i>=0; i--){
        bool swapped=0;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j+1], arr[j]);
            swapped=1;
            }
        }
        if(swapped==0)
        break;
    }

    for(int i=0; i<n ;i++)
    cout<<arr[i]<<" ";
}