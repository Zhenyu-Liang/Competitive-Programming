a=int(input())
x=sorted([*map(int,input().split())])
y=0
c=0
while sum(x)>=y:
    y+=x[-1] 
    del x[-1]
    c+=1

print(c)
