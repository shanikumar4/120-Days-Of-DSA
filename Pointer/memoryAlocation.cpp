#include<iostream>
using namespace std;

int main(){
    // vairable ke ly heap memeory allocate kro

    int *ptr = new int; //dynamically memory allocation
    *ptr=5;//value assign krdi
    cout<<*ptr<<endl;

    float *ptr1 = new float;
    *ptr1=5.5;
    cout<<*ptr1<<endl;

    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int *ptr2 = new int[n];//array ke ly heap memory allocate kro

    // value assign krdi
    for(int i=0;i<n;i++){
        ptr2[i]=i+1;
    }
    // print the array elements
    for(int i=0;i<n;i++){
        cout<<ptr2[i]<<endl;
    }

    //delete keyword is used to free the memory allocated by new operator
    delete ptr;
    delete ptr1;
    delete[] ptr3;
}