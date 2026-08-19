#include<iostream>
using namespace std;

int squaresum(int n){
    if(n==1)
    return 1;

    return (n*n)+squaresum(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<squaresum(n);
    return 0;
}