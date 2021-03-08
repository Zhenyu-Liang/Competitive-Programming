for i in range(int(input())):
    x,y=input().split()
    a={*map(int,input().split())}
    b={*map(int,input().split())}
    if c:=a&b:
        print("YES")
        print(1,[*c][0])
    else:
        print("NO")

