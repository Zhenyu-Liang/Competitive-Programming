f=lambda a,b:min(abs(a-b), 26-(abs(a-b)))

n=input()
x=dict(zip([chr(i)for i in range(97,123)],range(1,27)))
ans=f(x["a"],x[n[0]])
for i in range(len(n)-1):
   ans+=f(x[n[i]],x[n[i+1]]) 

print(ans)
     
