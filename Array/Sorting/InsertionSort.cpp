/* Time Complexity :
    best case : O(n),
    worst case: O(n^2)
*/

// in this sorting algorithm we move the second elemet toward the first if second is less then first and after this we further do the same thing 

#include<iostream>
using namespace std;

int main(){
    int arr[1000], n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n ;i++)
    cin>>arr[i];

    for(int i=1; i<n ;i++){
        for(int j=i; j>0; j--){
            if(arr[j-1]>arr[j])
            swap(arr[j-1], arr[j]);
            else 
            break;
        }
    }

    for(int i=0; i<n ;i++)
    cout<<arr[i]<<" ";
}