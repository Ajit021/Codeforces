#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll  n;
	cin>>n;
	ll  a[n];
	ll  k;
	for(ll  i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	ll  m=n;
	ll max1,min1;
	  for(ll  i=0;i<n;i++)
	   {
	   	   if(i==0)
	   	   {
	   	   	  max1=(abs(a[i]-a[n-1]));
	   	   	  min1=abs(a[i]-a[i+1]);
		   }
		   
		  else if(i==n-1)
	   	   {
	   	   	  max1=(abs(a[i]-a[0]));
	   	   	   min1=abs(a[i]-a[i-1]);
		   }
		   else
		   {
		   	  max1=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
		   	  min1=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
		   }
		   
		    cout<<min1<<" "<<max1<<"\n";
	   }	
	
	
	
	
	
	
	
}
