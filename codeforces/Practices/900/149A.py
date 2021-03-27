a=int(input())
*n,=sorted(map(int,input().split()))[::-1]

ans=0
x=0
for i in n:
    if x>=a:
        print(ans)
        break
    x+=i
    ans+=1
else:
    if x>=a:
        print(ans)
    else:
        print(-1)

