for i in range(int(input())):
    n,m,x=map(int,input().split())
    i=1
    c=(x-i)/n
    if c!=int(c):
        i=x-(int(c)*n)
        c=(x-i)/n
    a=c+1+((i-1)*m)
    print(int(a))

    


