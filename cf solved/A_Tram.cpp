#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<n;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main() {
	int n,a,b,l=0;
	cin>>n;
    int k[n];
	for(int i=0;i<n;i++){
		cin>>a>>b;
		l=l-a+b;
		k[i]=l;}

    sort(k,k+n);
    cout<<k[n-1]<<endl;}
	
// int main() {
// 	 int n,a,b,k=0,l=0;
// 	 cin>>n;
// 	 for(int i=0;i<n;i++){
// 		 cin>>a>>b;
// 		 l=l-a+b;
// 		 k=max(k,l);}

// 	 cout<<k;}