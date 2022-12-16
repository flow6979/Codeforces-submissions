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
        int n,d;
        cin>>n>>d;
        int v[n];
        f(i,n){cin>>v[i];}
        sort(v,v+n);
        if(v[n-1]<=d)cout<<"YES"<<endl;
        else{if(v[0]+v[1]<=d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    }
}

#include <bits/stdc++.h>

using namespace std;

// int main() {
//   int tc;
//   cin >> tc;
//   while (tc--) {
//     int n, d;
//     cin >> n >> d;
//     vector<int> a(n);
//     for (int& x : a) cin >> x;
//     sort(a.begin(), a.end());
//     cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << endl;
//   }
// }