#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	
	long long sha=0 , vasy=0,n;
	cin>>n;
	int a[n+1];
	int m;
	for(int  i = 1;i <= n ;i++){
		cin>>m;
		a[m]=i;
	}
	int k;
	cin>>k;
	while(k--){
		int j;
		cin>>j;
		int m=a[j];
		sha+=m;
		vasy+=(n+1-m);
	}
	cout<<sha<<" "<<vasy;
	
	
}
