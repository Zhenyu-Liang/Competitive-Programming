_=input
_()
*a,=map(int,_().split())
c=[]
z=1
for i in range(1,len(a)):
    if a[i-1]<a[i]:
        z+=1
    else:
        c+=[z]
        z=1
c+=[z]
print(max(c))

