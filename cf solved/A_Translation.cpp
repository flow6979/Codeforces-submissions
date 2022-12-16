#include <bits/stdc++.h>
using namespace std;
 
int main()
{int k=0;
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (t[i] == s[n - i - 1])
        { k++;}
        else{k;}}
    if (k==n){cout<<"YES";}
    else{cout<<"NO";}
}