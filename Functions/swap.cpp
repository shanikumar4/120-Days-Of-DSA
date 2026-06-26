#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c, float &d){
    float r=c;
    c=d;
    d=r;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    swap(a, b);
    cout<<a<<" "<< b <<" "<<endl;;

    float f1=4.5, f2 = 3.5;
    swap(f1, f2);
    cout<<f1<<" "<<f2<<" ";
}