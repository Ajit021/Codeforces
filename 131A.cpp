#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin>>s;
	int k=s.size();
	int count=0;
	
	
	if(k>1)
	{
	for(int i=1;i<k;i++)
	{
		if(isupper(s[i]))
		  count++;
	}
	
	if(count==k-1)
	{
		for(int i=0;i<s.size();i++)
		{
			if(isupper(s[i]))
			  {
			  	
			   char c=tolower(s[i]);
			  cout<<c;
			  }
			  else
			   {
			   char c=toupper(s[i]);
			   	cout<<c;
			   }
		}
	}
	else
	 cout<<s;
  }
  
  
  else 
   {
   	if(isupper(s[0]))
			  {
			  	char c=tolower(s[0]);
			  cout<<c;
			   
			  }
			  else
			   {
			   char c=toupper(s[0]);
			  cout<<c;
			   	
			   }
   }
   
	
}
