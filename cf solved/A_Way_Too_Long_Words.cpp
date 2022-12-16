#include <iostream>
#include <string>
using namespace std;
 
int main () {
 int t;
    cin>>t;
    while(t--) {
    string m;
    cin>> m;

if (m.size()> 10)
    {cout<< m[0]<<m.size()-2<<m[m.size()-1]<<"\n";}
else {cout<< m<<"\n";}
      }
   return 0;
}