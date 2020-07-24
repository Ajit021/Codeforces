#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,b,d;
	cin>>n>>b>>d;
	
	int count=0;
	int a[n+1];
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	  
	  int sum=0;
	 for(int i=1;i<=n;i++)
	 {
	   
	    if(a[i]<=b)
	    sum=sum+a[i];
	    
	    if(sum>d)
	    {
	    	count+=1;
	    	sum=0;
	    	
		}
	   
	   
	   
	   
	   
	     	
	 }	
	 
	 cout<<count;
}
