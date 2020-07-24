#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	int count=0,count1=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
		if(a[i]>0)
		  count1+=a[i];
		  
	     else if(a[i]<0&&count1>0)
	       {
	       	//cout<<count1<<" ";
	       	  count1+=a[i];
		   }
		   else if(count1==0)
		     {
		     	count++;
			 }
		
	}
	
	
	cout<<count;
}
