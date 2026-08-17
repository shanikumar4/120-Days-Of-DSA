#include<iostream>
using namespace std;

// void print(int num, int n)
// {
//     if(num==n) //base case
//     {
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1, n);
// }

void print(int n){
    //base case
    if(n==1){
        cout<<n<<endl;
        return;
    }

    print(n-1);
    cout<<n<<endl;
    
}

int main(){
    //print number from 1 to N;
    int n;
    cin>>n;
    print(n);

}