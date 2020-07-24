#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,t;
	cin>>n>>t;

	string s="";
	if(t>=2&&t<10)
	 {
    char c=t+'0';

	while(n--)
	 {
	  	s=s+c;
	 }
    
	cout<<s;
}
else if(t==10&&n!=1)
 {
    s="1";
    n-=1;
	while(n--)
	 {
	  	s=s+"0";
	 }
    
    
	cout<<s;	
 }
else
  cout<<"-1";

	
}
