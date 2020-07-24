#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int>v;
	 
	  if(n%2==0)
	  {
	  	v.push_back(2);
	  	 while(n%2==0)
	  	 {
	  	 	v.push_back(2);
	  	 	n=n/2;
		   }
	  }
	  for(int i=3;i*i<=n;i=i+2)
	  {
	  	 if(n%i==0)
	  {
	  	//v.push_back(i);
	  	 while(n%i==0)
	  	   {
	  	 	v.push_back(i);
	  	 	//cout<<i<<" ";
	  	 	n=n/i;
		   }
	  }
	  }
	  
	  
	  if(v.size()>0)
	  {
	  for(int i=0;i<v.size();i++)
	  {
	  	   if(i<v.size()-1)
	  	    cout<<v[i]<<"*";
	  	 else 
	  	  cout<<v[i];
	  }
   }
   else
   {
   	cout<<n;
   }
	
}
