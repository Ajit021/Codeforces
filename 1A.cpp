#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
main()
{
	 ll m,n;
	cin>>n>>m;
	ll a;
	cin>>a;
	//cout<<ceil((double)n/a)*ceil((double)m/a);
	
	//cout<<ceil((double)(n/a))*ceil((double)m/a);
	
 ll k=((n+(a-1))/a)*((m+(a-1))/a);
 cout<<k;
	
}
