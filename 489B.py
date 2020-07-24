n=int(input())
a=list(map(int,input().split()))

m=int(input())
b=list(map(int,input().split()))
b.sort()
a.sort()
'''print(a)
print(b)'''
c=0
for i in range(n):
    for j in range(m):
        if (( abs(a[i]-b[j])<=1) and b[j]!=-1):
            b[j]=-1
            c+=1
            break
            
print(c)
