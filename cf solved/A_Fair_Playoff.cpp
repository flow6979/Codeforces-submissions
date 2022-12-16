#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc ll TC; cin >> TC; while (TC--)
int main(){
    tc{
    int a,x,y,z;
    cin>>a>>x>>y>>z;
    if(max(a,x)<min(y,z)){cout<<"NO"<<endl;}
    else if(max(y,z)<min(a,x)){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}
    }
}
   