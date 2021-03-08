for i in range(int(input())):
    a=int(input())
    b=input()
    ans=""
    for i in range(a):
       ans+=b[i:a][i]
       a+=1
    print(ans)
