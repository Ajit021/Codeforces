#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,t,k,d;
	cin>>n>>t>>k>>d;
	
	int c=0;
	while(c>=d)
	{
	    n-=k;
	    c+=t;
		 	
	}
	if(n>0)
	  cout<<"YES";
	else
	 cout<<"NO\n";
	
}
