gcd=lambda a,b:[i for i in range(1,min(a,b)+1)if a%i==0 and b%i==0][-1]


a,b,c=map(int,input().split())
i=0
while c>0:
    if i==0:
        c-=gcd(a,c)
    else:
        c-=gcd(b,c)

    i^=1

print(i^1)
    

