a=int(input())

def okp(n):
    return len([i for i in range(1,n+1)if n%i==0])<=2     

def cp(n):
    ans=len([i for i in range(2,n+1)if n%i==0 and okp(i)])
    return ans 

ans=0
for i in range(1,a+1):
    if cp(i)==2:
        ans+=1

print(ans)
