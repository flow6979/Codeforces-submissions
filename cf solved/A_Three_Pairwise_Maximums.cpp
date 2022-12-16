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
       int v[3];
       f(i,3){cin>>v[i];}
       sort(v,v+3);
       {
       if(v[1] != v[2]){cout << "NO" << endl;}
       else{cout << "YES" << endl << v[0] << " " << v[0] << " " << v[2] << endl;}
       }
     }
}

