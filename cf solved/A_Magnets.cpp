#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, n) for (ll i = 0; i < n; i++)

int main()
{
    int n, v = 0;
    cin >> n;
    int k[n];
    f(i, n){cin >> k[i];}
    for(int j=0;j<n;j++){if (k[j] != k[j+1]){ v++;}}
        cout << v;
        return 0;
    }