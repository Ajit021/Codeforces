#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	
	int k;
	int c=0;
	vector< pair<int,int> >v;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			for(int j=i+1;j<n;j++)
			 {
			 	if(a[i]==b[j])
			 	{
			 		
			 		//cout<<a[i]<<" "<<b[j];
			 		c+=1;
			 		k=j;
			 		//b[k]=-1;
			 		break;
				 }
				 
			 	  
			 }
			 //cout<<b[i]<<" "<<b[k]<<"\n";
			 v.push_back(make_pair(i,k));
			 swap(b[i],b[k]);
			 
		
		}
	}
	
	cout<<c<<"\n";
	for(int i=0;i<c;i++)
	  {
	  	cout<<v[i].first<<" "<<v[i].second<<"\n";
	  }
	
}
