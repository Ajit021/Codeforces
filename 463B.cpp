#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int sol=0,x=0,y,energy=0;
	for(int i = 0; i < n; i++){
		cin >> y;
		energy+=x-y;
		if(energy<0){
		  sol=sol+(-(energy));
		  energy =0	;
		}
		x=y;
	}
	cout << sol;
}

