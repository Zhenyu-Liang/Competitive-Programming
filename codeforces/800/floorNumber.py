for i in[*open(0)][1:]:
    a,b=map(int,i.split())
    ans=1
    if a<3:
        print(ans)
    else:
        x=3
        y=(x+b)-1
        while 1:
            ans+=1
            if x<=a<=y:
                break
            x+=b
            y+=b
        print(ans)

