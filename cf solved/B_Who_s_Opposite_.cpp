
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int n = (max(a, b) - min(a, b)) * 2;
        if (a > n || b > n || c > n)
            cout << "-1"<<endl;
        else
        {
            if (c <= n / 2)
                cout << n / 2 + c << endl;
            else
                cout << c - n / 2 << endl;
        }
    }
}