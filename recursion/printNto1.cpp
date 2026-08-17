#include<iostream>
using namespace std;

void print(int n){

    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

int main(){
    //print n to 1

    int n=10;
    print(n);
    return 0;
}