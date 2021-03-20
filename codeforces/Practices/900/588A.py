ans=0
n=101
for i in range(int(input())):
    a,b=map(int,input().split())
    if b<n:n=b
    ans+=n*a

print(ans)


