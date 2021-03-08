for i in range(int(input())):
    _,d=map(int,input().split())
    *a,=map(int,input().split())
    if max(a)<=d:
        print("YES")
    else:
        x=sorted(a)
        if x[0]+x[1]<=d:
            print("YES")
        else:
            print("NO")
