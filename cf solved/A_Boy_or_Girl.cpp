#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,n) for(ll i=0;i<n;i++)

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    int k=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
            k++;
    }

    if(k%2 == 1)
        {cout<<"CHAT WITH HER!"<<endl;}
    else
       {cout<<"IGNORE HIM!"<<endl;}

    return 0;}
