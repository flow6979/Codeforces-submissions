#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<n;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb               push_back
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))


int main()
{
    int n,k=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        k+=n/a[i];
        n=n%a[i];
    }
    cout<<k<<endl;
    return 0;
}

// int main(){
//     int n;
//     cin>>n;
//     if(n%100==0)cout<<n/100;
//     else if((n%100)%20==0)cout<<n/100+(n%100)/20;
//     else if(((n%100)%20)%10==0)cout<<n/100+(n%100)/20+((n%100)%20)/10;
//     else if((((n%100)%20)%10)%5==0)cout<<n/100+(n%100)/20+((n%100)%20)/10+(((n%100)%20)%10)/5;
//     else if(((((n%100)%20)%10)%5)%1==0)cout<<n/100+(n%100)/20+((n%100)%20)/10+(((n%100)%20)%10)/5+((((n%100)%20)%10)%5)/1;
    
// }