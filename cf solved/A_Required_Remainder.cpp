#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc     \
    ll TC;     \
    cin >> TC; \
    while (TC--)
#define f(i, n) for (ll i = 0; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z) max(x, max(y, z))
#define Min(x, y, z) min(x, min(y, z))
#define Maax(a, x, y, z) max(a, max(x, max(y, z)))

int main()
{
    tc
    {
        ll x, y, k;
        cin >> x >> y >> k;
        if(k-k%x+y>k){cout<<k-k%x+y-x<<endl;}
        else{cout<<k-k%x+y<<endl;}
   }
}