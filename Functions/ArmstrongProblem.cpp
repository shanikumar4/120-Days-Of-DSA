#include<bits/stdc++.h>
using namespace std;

int countdigit(int num){
    int count=0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}

bool armstrong(int num, int digit){
    int rem , ans=0 , n=num;

    while(n){
        rem = n%10;
        n/=10;
        ans = ans+ pow(rem , digit);
    }
    return ans ==num;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int digit = countdigit(num);
    cout<<armstrong(num, digit);

}