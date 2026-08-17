#include<iostream>
using namespace std;

// void printeven(int num, int n){
//     //base case
//     if(num>n){
//         // cout<<num<<endl;
//         return;
//     }

//     cout<<num<<endl;
//     printeven(num+2, n);
// }

void printeven(int num){
    //base case
    if(num==2){
        cout<<num<<endl;
        return;
    }
    printeven(num-2);
    cout<<num<<endl;
}


int main(){
    //print even numbers from 1 to N using recursion
    int n;
    cin>>n;

    if(n%2!=0){
        n=n-1;
    }

    printeven(n);
}