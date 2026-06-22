/*
    Comparsion operator 
    yes/no 
    {==, >, <, >=, <=, !=}
    { >, <, >=, <=} > {==, !=}
    Associativity : Left to right;
*/

#include<iostream>
using  namespace std;

int main(){
    int a, b;
    cout<<"Enter the alue of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    // ==

    // if(a==b)
    // cout<<"Yes";
    // else
    // cout<<"no";

    // >, <, >=, <=, !=

    if(a>b)
    cout<<"Yes";
    else
    cout<<"no";
}