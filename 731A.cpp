#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin>>s;
	int k=97;
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		
		 sum+=min(abs(s[i]-k),26-abs(s[i]-k));
		 k=(int)s[i];  
		  
		  
	}
	cout<<sum;
}
