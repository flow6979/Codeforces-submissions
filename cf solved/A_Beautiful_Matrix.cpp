#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<n;i++)

int main()
{
    int v[5][5];
    f(i,5){f(j,5){cin>>v[i][j];}}
   f(a,5){f(b,5){if(v[a][b]== 1){cout<<abs(a-2)+ abs(b-2);}}}
}
