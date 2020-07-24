#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin>>s;

	int count=0,count1=0;
	for(int i=0;i<s.length();i++)
	{
	  
		if(islower(s[i]))
		{
		  count++;
		 //cout<<s[i];
	     }
		else if(isupper(s[i]))
		{
		
		 count1++;
		 //cout<<s[i];
	    }
	}

	
	if(count==count1)
	  {
	  	  for(int i=0;i<s.length();i++)
	  	  {
	  	  	 s[i]=tolower(s[i]);
	      }
	      cout<<s;
	  }
	else if(count>count1)
	   {
	  	  for(int i=0;i<s.length();i++)
	  	  {
	  	  	 s[i]=tolower(s[i]);
	      }
	      cout<<s;
	  }
	  
	  else
	  {
	  	for(int i=0;i<s.length();i++)
	  	  {
	  	  	 s[i]=toupper(s[i]);
	      }
	      cout<<s;
	  }
	   
	
	
	
	
}
