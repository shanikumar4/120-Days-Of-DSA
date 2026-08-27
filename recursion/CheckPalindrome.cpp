#include<bits/stdc++.h>
using namespace std;

bool checkpl(string str, int start, int end){

        if(start>=end)
        return 1;

    if(str[start]!=str[end])
    return 0;
    else
    return checkpl(str, start+1, end-1);
}

int main(){
    string str = "namean";
        
    cout<<checkpl(str, 0, 4)<<endl;
}