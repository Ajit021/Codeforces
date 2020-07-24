#include<bits/stdc++.h>
using namespace std; 
int main() { 
long n,ne,i,count=0,newe,fours=0,three=0,two=0,ones=0; 
cin>>n; 
int s[100005];
 for(i=0;i<n;i++) 
 { cin>>s[i]; 
 if(s[i]==4) 
 fours+=1; 
 else if(s[i]==3)
  three+=1; 
  else if(s[i]==2)
   two+=1;
    else ones+=1; 
	} 
	count=fours;

count+=three;
   if(ones>=three)
   ones-=three;
   else
   ones=0;
   newe=two/2;
   count+=newe;
   two=two%2;
   ne=ones/4;
   count+=ne;
   ones=ones%4;
   if(ones==3&&two==1)
   {
            count+=2;
            cout<<count;
            }
            else if(ones<=2&&two==1)
            {
            count+=1;
            cout<<count;
            }
            else if(ones<=2&&ones>0&&two==0||(two==1&&ones==0))
            {
            count+=1;
            cout<<count;
            }
            else
            cout<<count;




            return(0);
            
			
}		
	 

