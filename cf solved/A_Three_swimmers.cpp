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
    tc{int p,a,b,c;
    cin>>p>>a>>b>>c;
    for(ll i=1;;i++){if(a*i-p>0 || b*i-p>0 || c*i-p>0)cout<<Min(a*i, b*i, c*i)-p<<endl;return 0;}

    }
}
