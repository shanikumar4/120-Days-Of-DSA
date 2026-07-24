#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={10, 20, 3, 4,5 , 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int sum1=0, sum2=0;

    for(int i=0; i<4; i++){
        int start=0, end=3;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0; i<4 ;i++){
        for(int j=0; j<4 ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}