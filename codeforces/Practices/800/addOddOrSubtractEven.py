for i in[*open(0)][1:]:
    a,b=map(int,i.split())
    c=abs(a-b)
    if c==0:
        print(0)
    else:
        if a>b:print(1*(c&1==0)or 2)
        else:
            if c&1>0:
                print(1)
            else:
                print(2)
