#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(ll n)
{
	if(n<=1)
	  return false;
	if(n<=3)
	  return true;
	if(n%2==0||n%3==0)
	 {
	 	return false;
	 }
	 for(ll i=5;i*i<=n;i=i+6)
	   {
	   	 if(n%i==0||n%(i+2)==0)
	   	   return false;
	   }
	return true;
}
main()
{
	ll t;
	cin>>t;
	while(t--)
	{ll a,b;
		cin>>a>>b;
		//cout<<a-b<<" "<<a+b;
		if((a-b)==1&& isPrime(a+b))
		  {
		 
		  	  cout<<"YES\n";
		  	
		  }
		  
		  else 
		     cout<<"NO\n";
	}
}
