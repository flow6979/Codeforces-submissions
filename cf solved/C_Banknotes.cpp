#include <bits/stdc++.h>
#define pb    push_back
#define ll    long long int
#define tc     ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define fb(i,a,b)          for(ll i=a; i>=b; i--)
#define fa(z) for(auto &val : z)                                       //pls use this
#define faout(z) fa(z){cout<<val<<" ";} cout<<endl;
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second 
#define cinvpii(p) int a,b; cin>>a>>b; p.push_back(make_pair(a,b))
#define cinvpll(p) ll a,b; cin>>a>>b; p.push_back(make_pair(a,b))
#define asc(v)             sort(v.begin(), v.end())                     //vectors,pairs,tuples,string
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define secp(v)             sort(v.begin(), v.end(), sortbysec);       //for pairs
#define mod 1000000007
#define rota(v,rotL)        rotate(v.begin(), v.begin()+rotL, v.end());    //rotating vector v at position rotL rightward
#define clr(x) memset(x, 0, sizeof(x))
#define prnt(do)    cout<<do<<endl
#define decide(cond)   auto result = (cond) ? "YES" : "NO";cout<<result<<endl;
 
ll n,m,x,a,b,c,d,cnt,fg;
const ll INF= LONG_LONG_MAX;
 
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}                //pairs des
template<typename T> void pop_front(std::vector<T>& vec){assert(!vec.empty());vec.erase(vec.begin());}

//mod
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_pow(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}
ll mod_fact(ll n, ll p){if (n >= p)return 0;ll result = 1;for (ll i = 1; i <= n; i++)result = mod_mul(result,i,p);return result% p;}
ll large_mod(string num, ll a){ll res = 0; for (ll i = 0; i < num.length(); i++)res = (res * 10 + (int)num[i] - '0') % a;return res;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll n){ll l=1;ll r=n;while(l<=r){ll mid=l+(r-l)/2;if(mid*mid==n)return true; if(mid*mid>n){r=mid-1;} else l=mid+1;}return false;}

// Maths
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {ll factorial = 1;for (ll i = 2; i <= n; i++)factorial = factorial * i;return factorial;}
ll nCr(ll n, ll r) {return factorial(n) / (factorial(r) * factorial(n - r));}
ll countDigit(ll n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}
ll removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}
ll reverse(ll n) {ll res=0; while(n){res=res*10+n%10; n=n/10;} return res;}

//Bits
string decToBin(ll n){string s="";if(n==0){s+='0';return s;}ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binToDec(string n){string num = n;ll dec_value = 0;ll base = 1;ll len = num.length();for(ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//string
string getInt(string s){string g=""; f(i,0,s.size()){if(s[i]>=48 && s[i]<=57)g+=s[i];} return g;}
string toUpperCase(string s){string k="";for(int i=0;i<s.size();i++){k+=char((s[i]&'_'));}return k;} 
string toLowerCase(string s){string k="";for(int i=0;i<s.size();i++){k+=char((s[i]|' '));}return k;} 
string removeDuplicateStr(string s){string r="";int hash[123]={0};f(i,0,s.size()){if(hash[s[i]]==0){hash[s[i]]=1;r+=s[i];}}return r;}
string removeLeadingZeros(string str){const regex pattern("^0+(?!$)");str = regex_replace(str, pattern, "");return str;}

// operations
vi removeDuplicatesVec(vi v){  vi::iterator ip;ip = std::unique(v.begin(), v.begin() + 12);v.resize(std::distance(v.begin(), ip));return v;}   //sort and find vec with unique elements
void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
vi factors(ll A){ vi v;if(A==1){v.push_back(1);return v;}for(int i=2;i*i<=A;i++){if(A%i==0 ){v.push_back(i);if(A/i!=i)v.push_back(A/i);}}sort(v.begin(),v.end());return v;}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))

int main(){
    tc{
        ll n,k,sum=0;
        cin>>n>>k;
        ll t=k+1;
        vl v(n);
        f(i,0,n){cin>>v[i];}
        f(i,0,n-1){
            if( (pow(10,v[i+1]-v[i])-1) <=t){sum+=((pow(10,v[i+1]-v[i])-1)*pow(10,v[i]));t-=(pow(10,v[i+1]-v[i])-1);}
            else{sum+=t*pow(10,v[i]);t=0;break;}
        }
        if(t!=0){sum+=pow(10,v[n-1])*t;}
        cout<<sum<<endl;
    }
}

//read problem CAREFULLY=ACCEPTED
//loss>>regret