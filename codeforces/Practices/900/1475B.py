for i in range(int(input())):
    n=int(input())
    if n<2020:
        print("NO")
    elif n%2020==0 or n%2021==0:
        print("YES")
    else:
        ans="NO"
        while n>=4041:
            n-=2021
            if n%2020==0:
                ans="YES"
                break
        print(ans)
            
