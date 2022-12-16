#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int t, n = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {

            n++;
        }
    }
    cout << n;
}
