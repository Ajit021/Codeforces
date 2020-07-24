n=int(input())
s=input()
ones=s.count('1')
zeroes=n-ones

print(abs(ones-zeroes))
