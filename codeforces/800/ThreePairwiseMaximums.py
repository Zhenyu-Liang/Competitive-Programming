for i in[*open(0)][1:]:
    a,b,c=sorted(map(int,i.split()))
    if c>b:
        print("NO")
    else:
        print("YES")
        print(*[a,a,b])
        
       
