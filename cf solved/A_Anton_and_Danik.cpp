#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,n) for(ll i=0;i<n;i++)
int main(){
    int n,k=0,t=0;
    cin>>n;
    char s[n];
    f(j,n){cin>>s[j];}

    f(i,n){if(s[i]=='A'){k++;}
    else if (s[i]=='D'){t++;}}
    if(k>t){cout<<"Anton";}
    else if(k<t){cout<<"Danik";}
    else{cout<<"Friendship";}
}
