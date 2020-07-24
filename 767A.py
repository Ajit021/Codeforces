n=int(input())
a=list(map(int,input().split()))
k=n
l={}
for i in range(1,n+1):
    l[i]=0
for i in a:
    if(i==k ) :
        print(i,end=" ")
        k-=1
        
        while(1):
          
            if k in l and l[k]==1 :
                print(k,end=" ")
                l[k]=0
                k-=1
                
            else:
                print()
                break
            
    else:
        print()
        l[i]=1
