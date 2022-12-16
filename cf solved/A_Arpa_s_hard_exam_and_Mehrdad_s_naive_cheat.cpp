#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(long long int i=0;i<n;i++){
       if(n==4*i){cout<<6;return 0;}
       else if(n==4*i+1){cout<<8;return 0;}
       else if(n==4*i+2){cout<<4;return 0;}
       else if(n==4*i+3){cout<<2;return 0;}
   }
      if(n==0){cout<<1;return 0;}
}