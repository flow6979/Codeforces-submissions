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
    tc{
        int n,k=0;
        cin>>n;
        int v[n];
        f(i,n){cin>>v[i];}
        f(j,n){if(v[j]%2==1){k++;}}
        if(k==n){if(n%2==0){cout<<"NO"<<endl;} else{cout<<"YES"<<endl;}}
        else if(k!=n && k>=1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}

