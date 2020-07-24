#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	map<string,int>m;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m[s]++;
	}
	int max=-99999;
	s="";
	for(auto i:m)
	   {
	   	 if(max<i.second)
	   	  {
	   	  	  max=i.second;
	   	  	  s=i.first;
		  }
	   }
	   cout<<s;
}
