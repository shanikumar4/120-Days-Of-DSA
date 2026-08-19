#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1)
    return 1;

    return n*factorial(n-1);
}

int main(){

    //factorial of a number using recursion
    int n;
    cin>>n;

    if(n<0){
        cout<<"Factorial is not defined for negative numbers"<<endl;
        return 0;
    }

    cout<<factorial(n)<<endl;
    return 0;
}