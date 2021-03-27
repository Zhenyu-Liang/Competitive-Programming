for i in range(int(input())):
    a=input()
    x=a.find("11")
    if a[x:].find("00")!=-1:
        print("NO")
    else:
        print("YES")
