ans=int(input())
while sum(map(int,str(ans)))%4>0:
    ans+=1

print(ans)
