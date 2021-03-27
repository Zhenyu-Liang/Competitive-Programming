for i in range(int(input())):
    a,b,c=map(int,input().split())
    for i in range(b):
        if a//2<10:
            break
        a=a//2+10

    if a-10*c<=0:
        print("YES")
    else:
        print("NO")



        
