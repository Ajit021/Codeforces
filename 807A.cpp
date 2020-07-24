#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int c=0;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	 {
	 	cin>>a[i]>>b[i];
	 	if(a[i]==b[i])
	 	  c++;
	 }
	  if(c==n)
	    {
	    	int k=0;
	       for(int i=1;i<n;i++)
		    {
		    	if(a[i]<=a[i-1])
		    	{
		    		k++;
				}
			}  
			
			if(k==n-1)
			  {
			  	cout<<"maybe";
			  }            
			 else
			  {
			  	cout<<"unrated";
					   }     	
		}
		
	else
	  cout<<"rated";
}
