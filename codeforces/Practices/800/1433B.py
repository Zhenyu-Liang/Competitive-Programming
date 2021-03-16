for i in[*open(0)][2::2]:
    *a,=map(int,i.split())
    c=[]
    for i in range(len(a)):
        if a[i]==1:
            c+=[i]
    s=0
    for j in range(1,len(c)):
        s+=abs(c[j]-c[j-1]-1)

    if s==0 or len(c)<2:
        print(0)
    else:
        print(s)
            
            


