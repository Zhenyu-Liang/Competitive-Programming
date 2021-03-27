a,b=map(int,input().split())

s=a
ans=0
i=0
while s>0:
    i+=1 
    if i%b==0:s+=1
    s-=1  
    ans+=1 

print(ans)
