// time complexity O(n^2);
//Space Complexity O(1);
// If size of array is n , no of rounds = n-1;

#include<iostream>
using namespace std;

int main(){
    int arr[1000], n;
    cout<< "Enter the size of array: ";
    cin>>n;
    cout<<"Enter the Elements in array: ";
    for(int i=0; i<n ;i++)
    cin>>arr[i];

    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n ;i++)
    cout<<arr[i]<<" ";
}