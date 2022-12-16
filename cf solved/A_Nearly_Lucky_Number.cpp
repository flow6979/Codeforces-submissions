#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,n) for(ll i=0;i<n;i++)
int main(){
    string s;
    cin >> s;
    int n= s.size();
    int k=0;
    f(i,n){if(s[i]=='4' || s[i]=='7'){k++;}}
    if(k==4 || k==7){cout<<"YES";}
    else{cout<<"NO";}
}
