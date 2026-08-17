#include<iostream>
using namespace std;

void print(int n){

    if(n==2){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}

int main(){
    // print even numbers from n to1 using recursion

    int n=10;
    print(n);
    return 0;
}