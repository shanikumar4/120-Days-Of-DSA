#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0){
        cout<<"Happy Birthday"<<endl;
        return;
    }
    
    cout<<n<<" days left for birthday"<<endl;
    fun(n-1);
}

int main(){
    int n=5;
    //Iterative approach
    // for(int i=n;i>0;i--){
    //     cout<<i<<" days left for birthday"<<endl;
    // }
    // cout<<"Happy Birthday"<<endl;
    fun(n);
    return 0;
}