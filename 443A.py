n=input()
k=set()
for i in n:
    if(ord(i)>=97 and ord(i)<=122):
        k.add(i)
print(len(k))
        
