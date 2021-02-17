_=input
p=[]
c=0
n=0
for i in range(int(_())):
    a=int(_())
    b=[*map(int,input().split())]
    for o in range(1,a):
        x=max(b[o],b[o-1])  
        y=min(b[o],b[o-1])
        if y*2<x:
            n=y
            z=[]
            for j in range(y,x):
                z+=[n*2]
                n=n*2
                c+=1
                if z[-1]*2>=x:
                    break
    p+=[c]
    c=0
for i in p:
    print(i)



        
