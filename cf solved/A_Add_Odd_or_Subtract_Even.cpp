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
    tc{
        int a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<endl;
        else if(a>b){if(a%2==0 && b%2==0)cout<<1<<endl;
                    else if(a%2==1 && b%2==1)cout<<1<<endl;
                    else{cout<<2<<endl;}}
        else if(a<b){if(a%2==0 && b%2==0)cout<<2<<endl;
                    else if(a%2==1 && b%2==1)cout<<2<<endl;
                    else {cout<<1<<endl;}}
    }
}