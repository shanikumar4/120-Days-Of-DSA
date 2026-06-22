#include<bits/stdc++.h>
using namespace std;

/*
        * * * * * * * * *
          * * * * * * * 
           * * * * * 
             * * *  
               * 
*/

int main(){
    int row, col;

    for(row=5; row>=1; row--){
        for(col=5-row; col>=1; col--){
            cout<<"  ";
        }
        for(col = row*2-1; col>=1; col--){
            cout<<"* ";
        }
        cout<<endl;
    }
}