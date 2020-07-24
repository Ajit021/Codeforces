#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	ll  n;
	cin>>n;
	ll  h;
	cin>>h;
	ll  count=0;
	for(ll  i=0;i<n;i++)
	{
		ll  k;
		cin>>k;
		if(k>h)
		   count+=2;
		else
		 count++;
	}
	cout<<count;
}
