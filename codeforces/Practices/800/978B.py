_=input
_()
b=_()
a=[]
x=0
for i in b:
    if i=="x":
        x+=1
    else:
        if x>=3:
            a+=[x]
        x=0 
if x>=3:a+=[x]

ans=0
for i in a:
   ans+=i-2


print(ans)
            




