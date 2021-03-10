_=input
z=lambda:[*map(int,_().split())]
for i in range(int(_())):
    _()
    a,b=z(),z()
    ans=0
    x=min(a)
    y=min(b)

    for i in range(len(a)):
        ans+=max(a[i]-x,b[i]-y)
    print(ans) 

           

 
