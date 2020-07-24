#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0,count1=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		   count++;
		else
		  count1++;
	}
	
	
	if(count>count1)
	  cout<<"Anton";
	else if(count1>count)
	 cout<<"Danik";
	else
	{
		cout<<"Friendship";
	}
	
	
}
