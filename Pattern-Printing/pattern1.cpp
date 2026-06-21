#include<bits/stdc++.h >

using namespace std;

int main(){
    int n,  m;
    cout<<"Enter no of Rows";
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}