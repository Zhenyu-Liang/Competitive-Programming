for i in range(int(input())):
    a=input().split()
    *x,=map(int,input().split())
    *y,=map(int,input().split())
    ans = 0
    for i in x:
       ans+=i in y

    print(ans)

