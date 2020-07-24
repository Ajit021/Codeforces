#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	  
	int t;
	cin>>t;
	while(t--)
	{
		 int x,y;
		 cin>>x>>y;
		 int m=a[x];
		 a[x]=0;
		 
		 if(x+1<=n)
		  {
		  	a[x+1]=a[x+1]+m-y;
		  }
		  if(x-1>=1)
		   {
		   	a[x-1]=a[x-1]+(y-1);
		   }
		   
		   
	}
	
	for(int i=1;i<=n;i++) 
	  cout<<a[i]<<"\n";  
	
}
