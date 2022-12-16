#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define pii                pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define vpll vector<pll>
#define asc(v)             sort(v.begin(), v.end())
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)       max(x, max(y, z))
#define Min(x, y, z)       min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))
#define mod 1000000007
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define pfl(x)              printf("%lld\n",x)
ll n,m,x,a,b,c,d,cnt,fg;
 
using namespace std;
 
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
bool isPrime(ll n) {if (n <= 1)return false; for (int i = 2; i < n; i++)if (n % i == 0)return false; return true;}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}
 

int main(){
    tc{
        int n;
        cin>>n;
        
        if(n<10){cout<<n<<endl;}
       else if(10<=n && n<18){cout<<n-9<<9<<endl;}
       else if(18<=n && n<25){cout<<n-17<<89<<endl;}
       else if(25<=n && n<31){cout<<n-24<<789<<endl;}
       else if(31<=n && n<36){cout<<n-30<<6789<<endl;}
       else if(36<=n && n<40){cout<<n-35<<56789<<endl;}
       else if(40<=n && n<43){cout<<n-39<<456789<<endl;}
       else if(43<=n && n<45){cout<<n-42<<3456789<<endl;}
       else if(45<=n && n<46){cout<<n-44<<23456789<<endl;}
       else cout<<"-1"<<endl;
    }
}