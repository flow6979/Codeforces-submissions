#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
#define f(i,a,b)        for(ll i=a;i<b;i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb               push_back
#define Max(x, y, z)     max(x, max(y, z))
#define Min(x, y, z)     min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))

int main() {
	string s;
	cin>>s;
	int k=0,m=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){k++;}
        else{m++;}
	    }
	if(k>m){char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;}}
        else{char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;}}
}
