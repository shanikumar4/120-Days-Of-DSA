#include<iostream>
using namespace std;

int sum(int n){
    if(n==1)
    return 1;

    return n+sum(n-1);
}

int main(){
    int n;
    cin>>n;

    if(n<0){
        cout<<"Sum of first n natural numbers is not defined for negative numbers"<<endl;
        return 0;
    }

    cout<<sum(n);
    return 0;

}