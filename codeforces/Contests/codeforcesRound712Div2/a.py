for i in range(int(input())):
    n = input()
    if n[0]!=n[-1]:
        n+="a"
        if n==n[::-1]:
            n=n[-1]+n
            n=n[:-1]
        if n==n[::-1]:
            print("NO")
        else:
            print("YES")
            print(n)
    else:
        n+="a"
        if n==n[::-1]:
            n=n[-1]+n
            n=n[:-1]
        if n==n[::-1]:
            print("NO")
        else:
            print("YES")
            print(n)
     

