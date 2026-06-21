#include<bits/stdc++.h>
using namespace std;

/*
                1
              1 2
            1 2 3
          1 2 3 4
        1 2 3 4 5
*/

int main(){
    int row, col;
    for(row=1; row<=5; row++){
        for(col=1; col<=5-row; col++){
            cout<<" "<<" "; 
        }
        for(col=1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}