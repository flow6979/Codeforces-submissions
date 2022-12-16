#include <bits/stdc++.h>
#define ll    long long int 
#define pb    push_back
#define tc     ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define fb(i,a,b)          for(ll i=a; i>=b; i--)
#define fa(z) for(auto &val : z)                                       //pls use this
#define vi vector<ll>
#define ff first
#define ss second 
#define asc(v)             sort(v.begin(), v.end())                     //vectors,pairs,tuples,string
#define dsc(v)             sort(v.begin(), v.end(), greater<ll>())
#define p2sort(v)             sort(v.begin(), v.end(), sortbysec);       //for pairs
#define mod 1000000007
#define rota(v,rotL)        rotate(v.begin(), v.begin()+rotL, v.end());    //rotating vector v at position rotL rightward
#define fill(a,b) memset(a, b, sizeof(a))
#define yn(do)  {if(do==1){cout<<"YES"<<endl;}else cout<<"NO"<<endl;}
//bits
 
using namespace std;
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}                //pairs des

//modfun
//KMP
//KMPbool
//Manacher
//Rabin

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}  //less than O(sqrt(n))
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll n){ll l=1;ll r=n;while(l<=r){ll mid=l+(r-l)/2;if(mid*mid==n)return true; if(mid*mid>n){r=mid-1;} else l=mid+1;}return false;}

// Maths
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {ll factorial = 1;for (ll i = 2; i <= n; i++)factorial = factorial * i;return factorial;}
ll nCr(ll n, ll r) {return factorial(n) / (factorial(r) * factorial(n - r));}
ll countDigit(ll n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}  //O(digit length)
ll removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}  //O(digit length)
ll reverseNum(ll n) {ll res=0; while(n){res=res*10+n%10; n=n/10;} return res;}  //O(digit length)

//Bits
string decToBin(ll n){string s="";if(n==0){s+='0';return s;}ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binToDec(string n){string num = n;ll dec_value = 0;ll base = 1;ll len = num.length();for(ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//string
string removeDuplicateStr(string s){string r="";ll hash[123]={0};f(i,0,s.size()){if(hash[s[i]]==0){hash[s[i]]=1;r+=s[i];}}return r;}
string removeLeadingZeros(string str){const regex pattern("^0+(?!$)");str = regex_replace(str, pattern, "");return str;}

// operations
vi removeDuplicatesVec(vi v){  vi::iterator ip;ip = std::unique(v.begin(), v.begin() + 12);v.resize(std::distance(v.begin(), ip));return v;}   //sort and find vec with unique elements
void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
vi factors(ll A){ vi v;if(A==1){v.push_back(1);return v;}for(ll i=2;i*i<=A;i++){if(A%i==0 ){v.push_back(i);if(A/i!=i)v.push_back(A/i);}}sort(v.begin(),v.end());return v;}  //O(sqrt(n))
vector<ll> sieve(ll n) {ll*arr = new ll[n + 1](); vector<ll> vect; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}  //O(n*log(log(n)))

//loss>>regret
int main(){
    tc{
        int n,chk=1;
        cin>>n;
        vi v(n),a(n);
        f(i,0,n)cin>>v[i];
        a[0]=v[0];
        int k=v[0];
        f(i,1,n){
            if(k>=v[i] && v[i]!=0){chk=0;;break;}
            else {
                k+=v[i];
                a[i]+=k;
            }
        }
        if(chk){
            f(i,0,n)cout<<a[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}

//ASCII - (0-9 : 48-57) ; (A-Z : 65-90) ; (a-z : 97-122)
//Upper : char(k&'_') , Lower : char(k&' ')