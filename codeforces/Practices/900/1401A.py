for i in range(int(input())):
    a,b=map(int,input().split())
    if a<=b:
        print(b-a)
    else:
        if a%2==b%2:
            print(0)
        else:
            print(1)
