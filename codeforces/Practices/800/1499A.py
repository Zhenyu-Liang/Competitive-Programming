for i in range(int(input())):
    a,b,c=map(int,input().split())
    x,y=map(int,input().split())
    if b+c>=x*2 and (a*2-(b+c))>=y*2:
        print("YES")
    else:
        print("NO")

