for i in range(int(input())):
    a = int(input())
    *b,=map(int,input().split())
    x = max(b)
    y = b.count(x)
    z = [i for i in range(a) if b[i]==x]
    if y>1:
        for j in z:
            if j in (0, a-1):
                if j==0 and b[j]>b[j+1]:
                    print(j+1)
                    break
                elif j==a-1 and b[j]>b[j-1]:
                    print(j+1)
                    break
            else:
                if b[j]>b[j+1] or b[j]>b[j-1]:
                    print(j+1)
                    break
        else:
            print(-1)


    else:
        print(b.index(x)+1)
     
