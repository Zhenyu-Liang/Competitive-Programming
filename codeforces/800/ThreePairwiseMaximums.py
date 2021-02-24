for i in[*open(0)][1:]:
    x=[*map(int,i.split())]
    if (q:=len({*x}))==3 or x.count(min(x))>1 and q!=1:
        print("NO")
    else:
        print("YES")
        if q==1:
            print(*x)
        else:
            x=sorted(x)
            x[-1]=1
            print(*x) 
        
        
        
