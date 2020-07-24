t=int(input())
while t>0:
    n=list(map(int,input().split()))
    c=97
    s=""
    for i in range(n[1]):
        s=s+ chr(c)
        c+=1
    print(s*(n[0]//n[1])+s[:(n[0]%n[1])])
        
    t-=1
