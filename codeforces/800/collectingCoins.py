for i in range(int(input())):   
    *a,n=map(int,input().split())
    a=sorted(a)
    if (n-(c:=(a[-1]-a[1])+(a[-1]-a[0])))%3>0 or n<c:
        print("NO")
    else:
        print("YES")
