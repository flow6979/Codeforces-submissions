#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, n) for (ll i = 0; i < n; i++)

int main()
{
    int n, h, k = 0;
    cin >> n >> h;
    f(i, n)
    {
        int a;
        cin >> a;
        if (a > h)
        {
            k += 2;
        }
        else
        {
            k += 1;
        }
    }

    cout << k;
}