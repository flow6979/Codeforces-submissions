#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double t, k = 0.0;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        k += s[i];
    }
    t = k / n;

    cout << fixed << setprecision(12) << t << endl;
    return 0;
}

