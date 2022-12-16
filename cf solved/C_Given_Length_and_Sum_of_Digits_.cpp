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
#define vit vector<int>::iterator it = v.begin()
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
ll countDigit(long long n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}
int removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}

int main(){
    int n,k;
    cin>>n>>k;
    int f=k;
    if(k>9*n){cout<<-1<<" "<<-1;}
    else if(k==0 && n>1){cout<<-1<<" "<<-1;}
    else if(k==9*n){
            string s="";
            f(i,0,n){s+='9';}
            cout<<s<<" "<<s;
    }
    else{
        int q=k/9, w=k%9;
        string ws=to_string(w);
        string s="",s2="";
        f(i,0,q){s+='9';}
        if(q!=n){s+=ws;}
        f(i,q+1,n){s+='0';}

        if(q==n-1){f(i,0,s.size()){s2+=s[s.size()-1-i];}}
        else if(k<2 && n>1){s2+='1';f(i,0,n-1){s2+='0';}s.clear();s+=s2;}
        else if(n==1){s2+=s;}
        else{f-=1;
        int e=f/9,r=f%9;
        string rs=to_string(r);
        s2+='1';
        f(i,0,n-2-e){s2+='0';}
        s2+=rs;
        f(i,0,e){s2+='9';}
        }

        cout<<s2<<" "<<s;
    }
}