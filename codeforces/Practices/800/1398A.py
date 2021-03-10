for i in[*open(0)][2::2]:
    a,b,*d,c=[*map(int,i.split())]
    if a+b>c:
        print(-1)
    else:
        print(1,2,len([a]+[b]+d+[c]))
