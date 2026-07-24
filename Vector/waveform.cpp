#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //create 2d vector
    int n, m;
    cout<<"Enter rows and cols : ";
    cin>>n>>m;
    vector<vector<int> >matrix(n, vector<int>(m,1));


    cout<<"Enter the Matrix element: ";

    for(int i=0; i<n ;i++)
    for(int j=0; j<m; j++)
    cin>>matrix[i][j];



    for(int j=0; j<m;j++){
        for(int i=0; i<n ;i++){
            if(j%2==0){
                cout<<matrix[i][j]<< " ";
            } else
            cout<<matrix[n-1-i][m-1-j]<<" ";
        }
    }


}