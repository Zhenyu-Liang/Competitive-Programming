for i in[*open(0)][1:]:
    ans=0
    a,b,c=map(int,i.split())
    while a<=c and b<=c:
        if a>b:
            b+=a
        else:
            a+=b
        ans+=1
    print(ans)
