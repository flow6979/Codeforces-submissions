#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;
    if ((w * (w + 1) * k / 2) >= n)
        {cout << (w * (w + 1) * k / 2) - n;}
        else {cout<<0;}
    return 0;
}