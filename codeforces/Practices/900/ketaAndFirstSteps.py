_=input
input()
c=ans=l=0
for i in map(int,_().split()):
    if l>i:
        c=1
    else:
        c+=1
    ans=max(ans,c)
    l=i 

print(ans)
             
