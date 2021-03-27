for i in range(int(input())):
    n=int(input())
    c1=c2=0
    while n%2==0:   
        n//=2
        c1+=1

    while n%3==0:   
        n//=3
        c2+=1

    if n==1 and c1<=c2:
        print(2*c2-c1)
    else:
        print(-1)
