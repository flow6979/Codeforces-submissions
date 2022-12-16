#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,x,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		k+=x;
		
	}
	
	if(k!=0){
		cout<<"HARD"<<endl;
	}
	else {
		cout<<"EASY"<<endl;
	}

	return 0;
}