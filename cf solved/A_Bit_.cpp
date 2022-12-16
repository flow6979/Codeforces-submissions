#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x = 0;
    string k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k[0] == '+')
        {
            x++;
        }
        else if (k[2] == '+')
        {
            x++;
        }
        else if (k[0] == '-')
        {
            x--;
        }
        else if (k[2] == '-')
        {
            x--;
        }
    }
    cout << x;
    return 0;
}
