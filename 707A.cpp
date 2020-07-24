#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k;
	cin>>n>>k;
	char m[n][k];
	int flag = 0;
	for(int i=0;i<n;i++)
	 {
	 	for(int j=0; j<k; j++ )     
	 	 { 
	 	   cin >> m[i][j] ;
	 	    if ( m[i][j] == 'C'|| m[i][j] == 'M'||  m[i][j] == 'Y')
	 	      flag=1;
	 	    
		  }
	 }
	 if(flag==1)
	   cout<<"#Color";
	else
	 cout<<"#Black&White";
	
}
