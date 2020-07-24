#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=4,l=7,m=477,o=74,q=47;
	for(int i=1;i<=n;i++)
	{
	  if(i==k||i==l||i==m||i==o||i==q)	
	  {
	  	if(n%i==0)
	  	{
	  		cout<<"YES";
	  		return 0;
		  }
	  }
	}
	
	cout<<"NO";
	return 0;
}
