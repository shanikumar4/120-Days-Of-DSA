#include<bits/stdc++.h>
using namespace std;

void swapping(int *a, int *b){  // Using pointers to modify the original variables                
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int first =10, second = 20;
    swapping(&first, &second);
    cout<<first<<" "<<second<<endl;
}