#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc     \
    ll TC;     \
    cin >> TC; \
    while (TC--)
#define f(i, n) for (ll i = 0; i < n; i++)
int main()
{
    int v[4];
    int k = 0;
    f(i, 4) { cin >> v[i]; }
    for (ll j = 0; j < 3; j++)
    {
        if (v[j] == v[j + 1] || v[j] == v[j + 2] || v[j] == v[j + 3])
        {
            k++;
            
        }
    }
     cout << k;
}