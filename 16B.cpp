#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int>&a,const pair<int,int>&b){
	return a.second>b.second;
}
main(){
	int n,m,x,y;
	cin>>n>>m;
	vector<pair<int,int> >v;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),compare);
//	cout<<"\n\n\n";
//	for (int i=0; i<m; i++) 
//    { 
//        // "first" and "second" are used to access 
//        // 1st and 2nd element of pair respectively 
//        cout << v[i].first << " "
//             << v[i].second << endl; 
//  
//    } 
//    cout<<"\n\n\n";
	
	int i=0;
	int cost=0;
	while(n!=0&& i<m){
		if(n>=v[i].first){
			
			//cost=cost+(v[i].second*v[i].first);
			n-=v[i].first;
			cost=cost+v[i].first*v[i].second;
			
		}
		else{
			cost=cost+(v[i].second*(n));
			n=0;
			
		}
		i++;
	}
	cout<<cost;
	 
	 
}
