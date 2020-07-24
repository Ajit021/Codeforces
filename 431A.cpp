#include<bits/stdc++.h>
using namespace std;
main()
{
	 int o,j,k,l;
	 cin>>o>>j>>k>>l;
	 string s;
	 cin>>s;
	 int sum=0;
	 for(int i=0;i<s.length();i++)
	 {
	 	
	       	  if(s[i]=='1')
	       	  {
//	       	  	 cout<<s[i]<<" "<<i;
	       	  	sum+=o;
				 }
				 
				 
	       	  else if(s[i]=='2')
	       	  {
	       	  	//cout<<s[i]<<" "<<j;
	       	  	sum+=j;
				 }
				 
				 
	       	  else if(s[i]=='3')
	       	  {
	       	  	//cout<<s[i]<<" "<<k;
	       	  	sum+=k;
				 }
				 
	       	  else if(s[i]=='4')
	       	  {
	       	  	//cout<<s[i]<<" "<<l;
	       	  	sum+=l;
				 }
		  
	 }
	 
	 
	 cout<<sum;
}
