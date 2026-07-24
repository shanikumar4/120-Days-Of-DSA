#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[3][4]= { 1, 2, 50, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int rows = 3, cols = 4;
    int sum = INT_MIN, index = -1;
    for(int row = 0; row < rows; row++){
        int total = 0;
        for(int col = 0; col < cols; col++){
            total += arr[row][col];
        }
        if(total > sum){
            sum = total;
            index = row;
        }
    }
    cout << index << "\n";

}