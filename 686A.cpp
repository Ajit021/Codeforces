#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
main()
{
	ll  n,x;
	cin>>n>>x;
	ll  total=x;
	ll  sad=0;
	while(n--)
	{
	   char c;
	   ll  m;
	   	cin>>c>>m;
		 if(c=='+')
		   {
		   	 total+=m;
		   }  
		   else if(c=='-')
		    {
		    	if(total>=m)
		    	  {
		    	  	total-=m;
				  }
				  else
				    sad++;
			}
	}
	
	
	cout<<total<<" "<<sad;	
	
	
}
