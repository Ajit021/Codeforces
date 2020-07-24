#include<bits/stdc++.h>
using namespace std;
main()
{
	int  n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	 {
	 	cin  >> a[i];
	 }
	  int count = 0;
	  int max = * max_element (a,a+n); 
	  int min = * min_element (a,a+n);
	  
	  for ( int i = 0; i < n; i++ )
	  {
	  	 if(a[i]>min && a[i]<max)
	  	   count += 1;
	  	 
	  }
	  
	cout<< count;
}
