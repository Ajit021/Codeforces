#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int>a;
	int l;
	for(int i=0;i<n;i++)
	{
	   cin>>l;
	   a.push_back(l);
	}
	
	
	
	int count=0,count1=0;
	int j=0,k=n-1;
	for(int i=0;i<n;i++)
	{
	    if(i==0||i%2==0)
	    {
	    
	    	if(a[j]>a[k])
			{
				//cout<<a[j]<<" ";
				count+=a[j];
			   j++;
			   
			   
			}
			else 
			{
				//cout<<a[k]<<" ";
				count+=a[k];
				k--;
			}
		}
		
	else
	    {
	    	
	    	if(a[j]>a[k])
			{
				//cout<<a[j]<<" ";
				count1+=a[j];
			   j++;
			   
			   
			}
			else 
			{
				   //cout<<a[k]<<" ";
				   	count1+=a[k];
				k--;
				
			
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	cout<<count<<" "<<count1;
	
	
	
	
}
