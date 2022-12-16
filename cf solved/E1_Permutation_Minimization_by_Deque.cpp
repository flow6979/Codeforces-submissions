#include <bits/stdc++.h>
#define ll               long long int
#define tc               ll TC; cin>>TC; while(TC--)
#define lavda        ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fq(i,a,b)        for(ll i=a;i<b;i++)
#define all(vectorname)  vectorname.begin(),vectorname.end()
#define rall(vectorname) vectorname.rbegin(), vectorname.rend()
#define op(prnt)         cout<<prnt<<nl
#define sz               size()
#define pb               push_back
#define mp               make_pair
#define nl               "\n"
#define vi               vector <ll>
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define ff               first
#define ss               second
#define yn(turuflse)     if(turuflse) cout<<"YES\n"; else cout<<"NO\n";
ll n,m,x,a,b,c,d,cnt,fg;

using namespace std;

ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
bool isPrime(ll n) {if (n <= 1)return false; for (int i = 2; i < n; i++)if (n % i == 0)return false; return true;}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}

void solve(){
    cin>>n;
    ll ar[n];
    fq(i,0,n) cin>>ar[i];
    deque <ll> v; 
    v.pb(ar[0]);
    fq(i,1,n){
        if(ar[i]<=v[0]) v.push_front( ar[i]);
        else v.pb(ar[i]);
    }
    fq(i,0,n) cout<<v[i]<<" ";
    cout<<nl;
}

int main(){
    lavda
    tc solve();
}