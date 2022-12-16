#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,a,b)        for(ll i=a;i<b;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb               push_back
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main(){
    tc{
        int n;
        cin>>n;
        int v[n],k[n-1];
        f(i,0,n){cin>>v[i];}
        sort(v,v+n);
        f(i,0,n-1){k[i]=v[i+1]-v[i];}
        sort(k,k+n-1);
        cout<<k[0]<<endl;
    }
}