#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,a,b)        for(ll i=a;i<b;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb               push_back
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main()
{
    int t;
    cin >> t;
   
    while (1)
    {
      t += 1;
   int a = t / 1000;
   int b = t / 100 % 10;
   int c = t / 10 % 10;
   int d = t % 10;
      if (a != b && a != c && a != d && b != c && b != d && c != d){break;}
    }
      cout << t << endl;
}