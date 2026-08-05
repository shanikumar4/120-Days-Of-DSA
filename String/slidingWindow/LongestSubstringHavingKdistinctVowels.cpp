#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

/* // Brute Force Approach
int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;

    int n= str.size();
    int ans=-1;

    for(int i=0; i<n ;i++){
        unordered_map<char, int>mp;

        for(int j=i; j<n ;j++){
            if(isVowel(str[j])){
                mp[tolower(str[j])]++;
            }
            if(mp.size()==k)
            ans=max(ans, j-i+1);
        }
    }
    cout<<ans<<endl;
}

*/

// Optimal O(n) Approach

int main()
{
    string s;
    cin>>s;

    int k;
    cin>>k;

    unordered_map<char,int> freq;

    int left=0;
    int ans=-1;

    for(int right=0;right<s.size();right++)
    {
        if(isVowel(s[right]))
            freq[tolower(s[right])]++;

        while(freq.size()>k)
        {
            if(isVowel(s[left]))
            {
                freq[tolower(s[left])]--;

                if(freq[tolower(s[left])]==0)
                    freq.erase(tolower(s[left]));
            }

            left++;
        }

        if(freq.size()==k)
            ans=max(ans,right-left+1);
    }

    cout<<ans;
}