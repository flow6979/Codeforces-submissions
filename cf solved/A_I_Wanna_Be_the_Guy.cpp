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
    int n,p,q,r=0;
    cin>>n;
    cin>>p;
    int v[200];
    f(i,0,p){cin>>v[i];}
    cin>>q;
    f(i,p,p+q){cin>>v[i];}
    sort(v,v+p+q);
    f(i,0,p+q){if(v[i]!=v[i+1])r++;}
    if(n==r){cout << "I become the guy." <<endl;}
    else{cout << "Oh, my keyboard!" << endl;}
}
//sets,union