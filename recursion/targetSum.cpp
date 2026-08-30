#include<bits/stdc++.h>
using namespace std;

bool find(int arr[], int index, int n, int target){

    if(target==0){
        return 1;
    }

    if(index==n || target<0)
    return 0;

    return find(arr, index+1, n, target) || find(arr, index+1, n, target-arr[index]);
}

int main(){
    int arr[]= {1,2,3,4};
    int target=7;
    cout<<find(arr, 0, 4, target)<<" ";

}