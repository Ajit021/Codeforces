def char_frequency(str1):
    dict = {}
    for n in str1:
        keys = dict.keys()
        if n in keys:
            dict[n] += 1
        else:
            dict[n] = 1
    len(dict)
    if len(dict)==26:
        return True;
    else:
        return False
     
     
     
     
     
k=int(input())     
s=input();
if(char_frequency(s.lower())):
    print("YES")
else:
    print("NO")
