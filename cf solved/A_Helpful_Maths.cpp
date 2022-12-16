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
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, v;
    cin >> s;
    for (int i=0; i<s.size(); i+=2){v.pb(s[i]);}
    asc(v);
    f(i,v.size()-1){cout << v[i] << "+";}
    cout<< v[v.size()-1] << endl;

    return 0;
}