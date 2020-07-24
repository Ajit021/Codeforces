m={'Tetrahedron':4,'Cube':6,'Octahedron':8,'Dodecahedron':12,'Icosahedron':20}
n=int(input())
su=0;
while(n>0):
    s=input()
    su+=m[s]
    n-=1
print(su)
