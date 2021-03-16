def check(n,m):
    a=b=None
    for i in range(len(n)):
        if n[i]>m:
            a=i 
            break
    n=n[::-1]
    for j in range(len(n)):
        if n[j]>m:
            b=(len(n)-1)-j
            break
    if a!=None and b!=None: 
        return abs(a-b)+1
    elif a!=None or b!=None:
        return 1 
    else:
        return 0
             
            

a,b=map(int,input().split())
n=[*map(int,input().split())]
x=check(n,b)
print(len(n)-x)
