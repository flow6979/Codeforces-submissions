#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<n;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main(){
    ll u,v,w,x;
    cin>>u>>v>>w>>x;
    string s;
    cin>>s;
    ll k=0,l=0,m=0,b=0,n=s.size();
    f(i,n){if(s[i]=='1'){k++;}}
    f(i,n){if(s[i]=='2'){l++;}}
    f(i,n){if(s[i]=='3'){m++;}}
    f(i,n){if(s[i]=='4'){b++;}}
    cout<<k*u+l*v+m*w+b*x;
    
}
