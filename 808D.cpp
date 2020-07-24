#include<bits/stdc++.h>
using namespace std;
main()
{
	
	int n;
	cin>>n ;
	vector <int> a(n+10,0);
	long long sum=0;
	for (int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	sum+=a[i];
	 	
	 }
	 
	 if (sum&1)
	  {
	  	cout<<"NO\n";
	  	return 0;
	  }
	 map<long long ,int>m,m1;
	 
	 m[a[0]]=1;
	 for( int i=1;i<n;i++)
	   m1[a[i]]++;
	   
	long long sdash=0;
	
	for (int i=0;i<n;i++)
	{
		sdash+=a[i];
		if(sdash==sum/2)
		{
			cout<<"YES\n";
			return 0;
		}
		if (sdash<sum/2)
		{
			long long  x=sum/2 - sdash;
			if(m1[x]>0)
			 {
			 
			cout<<"YES\n";
			return 0;
		     }
		}
		else 
	     {
	     	long long  x=sdash - sum/2;
			if(m[x]>0)
			 {
			 
			cout<<"YES\n";
			return 0;
		     }
		 }
		 
		 m[a[i+1]]++;
		 m1[a[i+1]]--;
	}
	 
	 cout<<"NO\n";
	 
	 
	 
	 
	 
	 
	
	
}
