#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, v = 0;
    ;
    cin >> n >> k;

    int p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (p[j] >= p[k - 1] && p[j] > 0)
        {
            ++v;
        }
    }

    cout << v;
    return 0;
}
