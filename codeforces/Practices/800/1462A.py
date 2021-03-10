for i in[*open(0)][2::2]:
    ans=[]
    a=[]
    *x,=map(int,i.split())
    if len(x)==1:
        print(*x)
    else:
        if len(x)%2>0 and len(x)>2:
           a+=[x.pop(len(x)//2)]  
        for j in range(len(x)//2):
            ans+=[x[j],x[-j-1]]
        print(*ans+a)
