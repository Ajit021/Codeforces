#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long ll;
main()
{
	ll  n;
	cin>>n;
	ll  t;
	cin>>t;
  ll  k=(n+1)/2;
  
	
	
	  if(t<=k)
	   {
	   	cout<<t+t-1;
	   	
	   }
	   
	   if(t>k)
	   {
	   	cout<<(t-k)+(t-k);
	  
	   }	
	
}
