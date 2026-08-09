#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // //Print the address iof firt element or 0 index element

    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // //Print the address of second element or 1 index element
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // // print the value
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // // sare address ko print kar do

    // for(int i=0; i<5; i++){
    //     cout<<arr+i<<" ";
    // }
    // cout<<endl;

    // // print all thr values of array using pointer
    // for(int i=0; i<5; i++){
    //     cout<<*(arr+i)<<" ";
    // }

    // print all the values of array using pointer

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    //print all the addresses

    for(int i=0; i<5; i++){
        cout<<ptr+i<<" ";
    }
    cout<<endl;

    //Arithmetic operation on pointer

    // for(int i=0; i<5; i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }

    //Adition 

    ptr =ptr+3;
    cout<<*ptr<<endl;
    ptr=ptr-2;
    cout<<*ptr<<endl;
}