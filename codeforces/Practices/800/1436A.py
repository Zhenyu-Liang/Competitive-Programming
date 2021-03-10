for i in range(int(input())):
    a,b=map(int,input().split())
    *c,=map(int,input().split())
    print("YNEOS"[sum(c)!=b::2])
