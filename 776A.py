a=input()

b=input()

l=list()

if(len(a)!=len(b)):
    print(max(len(a),len(b)))
elif(len(a)==len(b)):
    if(a!=b):
        print(max(len(a),len(b)))
    else:
        print("-1")
        
    
    

