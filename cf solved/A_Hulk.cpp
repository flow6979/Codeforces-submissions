#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,n) for(ll i=0;i<=n;i++)
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))


int main() { 
	int n; cin >> n; 
	for( int i = 0 ; i < n ; i++ ) { 
		cout << "I " ; 
		if(i % 2 == 0) {cout << "hate ";}
		else {cout << "love ";} 
		if(i+1 < n) {cout << "that ";} 
		else {cout << "it";}
	}
}