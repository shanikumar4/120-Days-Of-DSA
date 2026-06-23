#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Natural No: ";
    cin>>n;
    int sum =0;
    int i=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<sum;
}