#include <iostream>
#include <string>
using namespace std;

int main()
{
    string v, d;
    cin >> v >> d;
    for (int i = 0; i < v.size(); i++)
        if (v[i] >= 'A' && v[i] <= 'Z')
            v[i] += 32;
    for (int i = 0; i < d.size(); i++)
        if (d[i] >= 'A' && d[i] <= 'Z')
            d[i] += 32;

    for (int a = 0; a < v.size(); a++)
    {
        if ((int)v[a] > (int)d[a])
        {
            cout << 1;
            return 0;
        }
        else if ((int)v[a] < (int)d[a])
        {
            cout << -1;
            return 0;
        }
       }
    cout << 0;
    return 0;
}