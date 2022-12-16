#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc ll TC; cin >> TC; while (TC--)
#define sax     (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define pii                pair<int,int>
#define asc(v)             sort(v.begin(), v.end())
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)       max(x, max(y, z))
#define Min(x, y, z)       min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))
ll n,m,x,a,b,c,d,cnt,fg;
 
using namespace std;
 
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
bool isPrime(ll n) {if (n <= 1)return false; for (int i = 2; i < n; i++)if (n % i == 0)return false; return true;}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}

int main()
{
    tc
    {
        ll a, b;
        cin >> a >> b;
        if (a < b)
        {
            if (a == 1)
                cout << "NO" << endl;
            else
            {
                while (a < b && a != 3)
                {
                    if (a % 2 !=0)
                        a--;
                    a = 3 * a / 2;
                }

                if (a >= b)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
