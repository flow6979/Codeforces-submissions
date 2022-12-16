#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=1;i<n;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main(){
    int n,k,p=0;
    cin>>n;
    if(n==1){cout<<1;}
    if(n==2){cout<<1;}
    f(i,n){k=i*(i+1)/2;p+=k;
    if(n-p<0){cout<<i-1;return 0;}
     }
}
