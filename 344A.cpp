#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int>v;
	int a[n];
	//cin>>a[0];
	int count=0;
	for(int i=0;i<n;i++)
	{
		 cin>>a[i];
		if(a[i]!=a[i-1])
		  {
		  	//cout<<" "<<a[i]<<"\n";
		  	count++;
		  }
		
	}
	
cout<<count;
	
}
