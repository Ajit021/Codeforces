#include<bits/stdc++.h>
using namespace std;
int main(){
		string s;
		cin>>s;
		stack<char> t;
		string u="";
		int l=s.length();
		vector<int> h(28,0);
		for(int i=0;i<l;i++)
		{
			h[s[i]-'a'+1]++;
		}
		
		for(int i=0;i<l;i++)
		{
			t.push(s[i]);
			h[s[i]-'a'+1]--;
			while(!t.empty())
			{
				int c=0;
				for(int j=0;j<28;j++)
				{
					if(j<(t.top()-'a'+1) && h[j]>0)
					{
						c=1;
						break;
					}
				}
				if(c==1)
				break;
				else{
				u+=t.top();
				t.pop();
			    }
			}
		}
		while(!t.empty())
		{
			u+=t.top();
			t.pop();
		}
		cout<<u;
    
	return 0;
}
