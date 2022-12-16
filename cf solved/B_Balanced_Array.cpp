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
        int n;
        cin>>n;
        int k=n/2,v[n];
        if(k%2!=0){cout<<"NO"<< endl;}
       else{ cout << "YES" << endl;
            for (int i = 1; i <= k; ++i) {cout << i * 2 << " ";}
		    for (int i = 1; i < k; ++i) {cout << i * 2 - 1 << " ";}
		    cout << 3 * k - 1 << endl;}
    }
}