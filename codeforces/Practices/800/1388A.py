for i in[*open(0)][1:]:
    a=[6,10,14]
    if int(i)<31:
        print("NO")
    else:
        print("YES")
        n=14
        x=30
        if int(i)-30 in a:
            n+=1
            x+=1
        print(*[6,10,n,int(i)-x])
