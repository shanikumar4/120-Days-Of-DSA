#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={10, 20, 3, 4,5 , 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int sum1=0, sum2=0;

    for(int i=0; i<4; i++){
    sum1+=arr[i][i];
    sum2+=arr[i][3-i];
    }
    
    cout<<sum1<<endl;
    cout<<sum2<<endl;

}