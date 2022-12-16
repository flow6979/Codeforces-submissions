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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
       if(x>0 & y>0){if(2*a<b)cout<<(max(x,y)-min(x,y))*a+2*min(x,y)*a<<endl;
                    else cout<<(max(x,y)-min(x,y))*a + min(x,y)*b<<endl;}
       else if(x<0 & y<0){if(2*a<b)cout<<(max(x,y)-min(x,y))*a+2*abs(max(x,y))*a<<endl;
                        else cout<<(max(x,y)-min(x,y))*a + abs(max(x,y))*b<<endl;}
       else{cout<<(max(x,y)-min(x,y))*a<<endl;}
    }
}