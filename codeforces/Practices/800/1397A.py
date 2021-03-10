for i in range(int(input())):
    a=""
    b=0
    for j in range(int(input())):
        a+=input()
        b+=1
    if len(a)==1:
        print("YES")
    else:
        for x in {*a}:
            if a.count(x)%b!=0:
                print("NO")
                break 
        else:
            print("YES")
