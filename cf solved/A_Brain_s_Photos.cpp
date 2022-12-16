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

int main()

{       int a,b,c=0;
        char t;
        cin>>a>>b;
        for(int i=0;i<a*b;i++)
        {cin>>t;
        if(t=='C' || t=='M' || t=='Y'){c++;}}

        if(c==0) cout<<"#Black&White"<<endl;
        else cout<<"#Color"<<endl;
     
}
   //if(c) cout<<"#Color"<<endl;
  // else cout<<"#Black&White"<<endl;