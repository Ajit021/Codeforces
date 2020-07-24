#include<bits/stdc++.h>
using namespace std;
main()
{
	int  n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	char x=a[0][0];
	char o=a[0][1];
	int c=0;
	int flag=0;
	if (x==o)
	  {
	  	cout<<"NO";
	  	return 0;
	  }
	for(int i=0;i<n;i++)
	 {
	 	 for(int j=0;j<n;j++)
	 	  {
	 	  	 if(i==j)
	 	  	 {
	 	  	 	if(a[i][j]==x)
	 	  	 	c++;
	 	  	 	else
	 	  	 	  flag=1;
	 	  	 	 
			 }
			 else if(i+j==n-1)
			   {
			   	if(a[i][j]==x)
	 	  	 	c++;
	 	  	 	else
	 	  	 	  flag=1;
			   }
			   else
			    {
			    	if(o!=a[i][j])
			    	 flag=1;
				}
				
				
				if(flag==1)
				 {
				 	cout<<"NO";
				 	return 0;
				 }
			 
		  }
	 }

	 
	 cout<<"YES";
	
	
	
}
