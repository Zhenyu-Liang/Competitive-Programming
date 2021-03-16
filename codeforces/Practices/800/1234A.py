for i in[*open(0)][2::2]:
    *a,=map(int,i.split())
    print(0--sum(a)//len(a))
