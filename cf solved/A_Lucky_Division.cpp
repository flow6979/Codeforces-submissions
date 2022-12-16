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

int main(){
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%477==0 || n%774==0 || n%744==0 || n%777==0)
    {cout<<"YES"<<endl;}    
    else cout<<"NO"<<endl;
}
// int main() {
// int n;
// cin>>n;
// bool flag=0;
// int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
//  for(int i=0;i<12;i++){
// 	 if(n%arr[i]==0){
// 		 flag=true;
// 	 }
//  }
//  if(flag)
// cout<<"YES";
// else
// 	cout<<"NO";
// return 0;
// }