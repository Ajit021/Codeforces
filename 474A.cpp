#include<bits/stdc++.h>
using namespace std;
main()
{
	string s1,s2,s3;
	s1="qwertyuiop[]\\";
	s2="asdfghjkl;''";

	s3="zxcvbnm,./";
	char c;
	cin>>c;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		int j=0;
		while(1)
		 {
		if( s[i] == s1[j])
		 {
		 	 if(c=='R')
		 	   cout<<s1[j-1];
		 	   
		 	 if(c=='L')
		 	   cout << s1[j+1];
		 	   
		 	break;
		 }
		 
		 else if(s[i] == s2[j] )
		   {
		   	   if(c=='R')
		 	   cout<<s2[j-1];
		 	   
		 	 if(c=='L')
		 	   cout << s2[j+1];
		 	   
		 	break;
		   }
		   
		   else if(s[i] == s3[j])
		    {
		    	if(c=='R')
		 	   cout<<s3[j-1];
		 	   
		 	 if(c=='L')
		 	   cout << s3[j+1];
		 	   
		 	 break;
			}
			j++;
	    }
	}
	
	
	
	
	
}
