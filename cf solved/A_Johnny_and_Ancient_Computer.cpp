#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define ff first
#define ss second 
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
        ll a,b,k,r=0,m=0,e=0;
        cin>>a>>b;
        if(max(a,b)%min(a,b)==0){k=max(a,b)/min(a,b);}
        else{e=1;}
        
        ll n=k;
        if(max(a,b)>=2*min(a,b)&& max(a,b)%2==0)
        {
            while(n!=1){
            if(n%2==0){n/=2;}
            else if(n%2!=0){m=1;break;}
            }
        }
        else{e=1;}

        if(m==0 && e==0){ 
            while(k!=1){
                if(k%8==0){k/=8;r++;}
                else if(k%8!=0 && k%4==0){k/=4;r++;}
                else if(k%4!=0 && k%2==0){k/=2;r++;}
            }
            cout<<r<<endl;
        }
        else if(a==b){cout<<0<<endl;}
        else{cout<<-1<<endl;}
    }
}