#include <bits/stdc++.h>
#define ll    long long int
#define pb    push_back
#define tc     ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define fa(z) for(auto &val : z)                                       //pls use this
#define vl vector<ll>
#define asc(v)             sort(v.begin(), v.end())                     //vectors,pairs,tuples,string
#define dsc(v)             sort(v.begin(), v.end(), greater<ll>())
#define p2sort(v)             sort(v.begin(), v.end(), sortbysec);       //for pairs
#define mod 1000000007
#define rota(v,rotL)        rotate(v.begin(), v.begin()+rotL, v.end());    //rotating vector v at position rotL rightward
#define fill(a,b) memset(a, b, sizeof(a))
#define yes  return (void) (cout << "YES\n");
#define no  return (void) (cout << "NO\n");
//bits
 
using namespace std;
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}                //pairs des

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}  //less than O(sqrt(n))
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {ll factorial = 1;for (ll i = 2; i <= n; i++)factorial = factorial * i;return factorial;}
ll nCr(ll n, ll r) {return factorial(n) / (factorial(r) * factorial(n - r));}
string decToBin(ll n){string s="";if(n==0){s+='0';return s;}ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binToDec(string n){string num = n;ll dec_value = 0;ll base = 1;ll len = num.length();for(ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
string removeLeadingZeros(string str){const regex pattern("^0+(?!$)");str = regex_replace(str, pattern, "");return str;}
void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
vector<ll> sieve(ll n) {ll*arr = new ll[n + 1](); vector<ll> v; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {v.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return v;}  //O(n*log(log(n)))

//modfun  KMP  KMPbool  Manacher  Rabin
//primeFactors  allFactors  sieve

void solve(){
        vector<int> x(3), y(3);
        f(i,0,3){
            cin >> x[i] >> y[i], 
            x.push_back(x[i]), 
            y.push_back(y[i]);
        }
        f(i,0,3) {
            if (x[i + 1] == x[i] && y[i + 2] == y[i] || x[i + 2] == x[i] && y[i + 1] == y[i]) no
        }
        yes
}

int main(){
   vwv
   tc{
      solve();
   }
   return 0;
}

//ASCII - (0-9 : 48-57) ; (A-Z : 65-90) ; (a-z : 97-122)
//Upper : char(k&'_') , Lower : char(k&' ')
//int hash[123] --> ex-removeduplicatesfromstr
