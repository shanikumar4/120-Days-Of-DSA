#include<iostream>
using namespace std;

int sum(int a, int b){ // Function declear
    int ans= a+b;
    return ans;

}

int mul(int m, int n){
    int ans =m*n;
    return ans;
}

void fun(){
    cout<<"Hello Coder Army\n";
}

int main(){
    int a, b;
    cout<< "Enter two numbers: ";
    cin>>a>>b;

    //function call
    cout<<sum(a, b)<<endl<<mul(a, b)<<endl;
    fun();
}