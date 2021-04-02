for i in range(int(input())):
    a=int(input())
    ans=a+a//9
    if a%9==0:
        print(ans-1)
    else:
        print(ans)
