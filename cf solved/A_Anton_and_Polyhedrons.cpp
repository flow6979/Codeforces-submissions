#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<n;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb               push_back
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main(){
    int n,k=0;
    string t;
    cin>>n;
    f(i,n){cin>>t;
    if(t=="Tetrahedron")k+=4;
    else if(t=="Cube")k+=6;
    else if(t=="Octahedron")k+=8;
    else if(t=="Dodecahedron")k+=12;
    else if(t=="Icosahedron")k+=20;}
    cout<<k;
}
