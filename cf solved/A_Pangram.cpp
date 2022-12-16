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
    int n;
    cin>>n;
    string s,r="";
    cin>>s;
    f(i,s.size()){if (s[i] <= 'Z' && s[i]>= 'A'){s[i] += 32;}}
    int hash[123]={0};
    f(i,n){if(hash[s[i]]==0){hash[s[i]]=1;
                            r+=s[i];}}
            asc(r);
            if(r=="abcdefghijklmnopqrstuvwxyz"){cout<<"YES";}
            else {cout<<"NO";}
}
