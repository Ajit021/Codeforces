#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k;
	cin>>n>>k;
	string s="";
	int i=0;
	int m=k;
	if(k<=n)
	{
	while(1)
	{
		k=m;
		//cout<<"kkg";
	while(k-- && s.length()<n)
	  {
	  	s+='a'+i;
	  	i=i+1;
	  	//cout<<s.length();
	  	//cout<<n<<"\n";
	  	
	  }
	  //cout<<s<<"\n";
	  if(s.length()!=n)
	  {
	   i=0;
	  }
	  else
	    break;
	  
   }
}
	  
	  cout<<s;
}
