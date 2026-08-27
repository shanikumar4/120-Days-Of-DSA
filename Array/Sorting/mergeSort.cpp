#include<iostream>
using namespace std;

void merge(int arr[], int start,int mid,  int end){
    int temp[9];

    int left = start, right=mid+1, index = 0;

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        } else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }

    while(left<=mid){
        temp[index]=arr[left];
        left++;
        index++;
    }

    while(right<=end){
        temp[index]=arr[right];
        right++;
        index++;
    }

    index=0;

    while(index<9 && start<=end){
        arr[start]=temp[index];
        index++;
        start++;
    }
}

void mergesort(int arr[], int start, int end){
    if(start==end)
    return ;

    int mid = start+(end-start)/2;

    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

int main(){
    int arr[]= {1, 2, 3, 7, 3, 4,8, 9, 12};

    mergesort(arr, 0, 8);

    for(int i=0; i<9; i++)
    cout<<arr[i]<<" ";
}