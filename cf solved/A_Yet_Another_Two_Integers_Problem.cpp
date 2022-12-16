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
    tc{
        ll a,b;
        cin>>a>>b;
        if(a==b){cout<<0<<endl;}
        else {if(abs(a-b)%10==0){cout<<(max(a,b)-min(a,b))/10<<endl;}
            else{cout<<(max(a,b)-min(a,b))/10+1<<endl;}}
    }
}
