a,b=sorted(map(int,input().split()))
ans=0
for i in range(a+1):
    for j in range(a+1):
        if i**2+j==a and i+j**2==b:
          ans+=1
print(ans)
    
