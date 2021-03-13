for i in[*open(0)][1:]:
    *a,=map(int,i.split())
    x=[0]*3 
    for j in range(len(a)):x[j%3]+=a[j]
    print(["chest","biceps","back"][x.index(max(x))])

