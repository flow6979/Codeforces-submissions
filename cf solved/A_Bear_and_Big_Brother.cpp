#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int t = 1;; t++)
    {
        if (pow(3, t) * a > pow(2, t) * b)
        {
            cout << t;
            return 0;
        }
    }
}
