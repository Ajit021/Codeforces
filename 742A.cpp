#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

main()
{
	ll  n;
	cin>>n;
	ll k;
	 if(n==0)
	   {
	     k=1;
	   }
	   else if(n%4==0)
	     k=6;
	    else if(n%4==1)
	      k=8;
	    else if(n%4==2)
	      k=4;
	    else if(n%4==3)
	      k=2;

	  cout<<k;
}
