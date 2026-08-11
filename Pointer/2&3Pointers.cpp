#include<bits/stdc++.h>
using namespace std;

void fun(int **p1){
    *p1=*p1+1;
}

int main(){
    int n =10;
    int *p = &n;
    int **p2 = &p;//double pointer
    // int ***p3 = &p2;//triple pointer
    
    // // cout<<p<<endl;
    // // cout<<&p<<endl;
    // // cout<<p2<<endl;
    // // cout<<&p2<<endl;
    // // cout<<p3<<endl;

    // // value ko modify krna ho, jo n main rakhi hai..

    // ***p3 = ***p3+10;
    // cout<<n<<endl;
    cout<<p<<endl;

    fun(p2);

    cout<<p<<endl;

}