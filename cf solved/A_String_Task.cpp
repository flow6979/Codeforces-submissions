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
    string v,k="";
    cin>>v;
    f(i,v.size()){if (v[i] >= 'A' && v[i] <= 'Z'){v[i] += 32;}}
    f(i,v.size()) {if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u' || v[i]=='y') continue;
                        else {k+=v[i];}}
    f(i,k.size()){cout<<'.'<<k[i];}
}