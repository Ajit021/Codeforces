#include<bits/stdc++.h>
using namespace std;
bool a[200];
void seive()
{
	 int n=sizeof(a)/sizeof(a[0]) ; 
   memset(a ,true,sizeof(a));
   for(int i = 2 ;i *i <= n; i++)
    {
    	 if ( a[i] == true)
    	   {
    	   	 for( int j = i*i ; j <= n ;j += i )
    	   	  {
    	   	  	a[j]=false ; 
			  }
		   }
	}	
}
main()
{
	seive();
	int n,m;
	cin>>n>>m;
	int k;
	int i=n+1;
	while(1)
	 {
	 	//cout<<a[i];
	 	if(a[i] == true )
	 	 {
	 	 	 k = i ;
	 	 	 break ;
		  }
		  i++ ;
	 }
	 if ( k == m)
	  cout<<"YES";
	 else 
	   cout<<"NO";
	
	
	
	
}
