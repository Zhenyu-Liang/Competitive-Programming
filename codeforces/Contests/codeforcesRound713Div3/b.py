for i in range(int(input())):
    l = []
    l1 = []
    for j in range(int(input())):
        a = input()
        l+=[a]
        if "*" in a:
            for x in range(len(a)):
                if a[x] == "*":
                    l1 += [(j, x)]

    if l1[0][0] == l1[1][0]:
        if l1[0][0] == 0:
            lj = [*l[1]]
            lj[l1[0][1]] = "*"
            lj[l1[1][1]] = "*"
            l[1] = "".join(lj)
        else:
            lj = [*l[0]]
            lj[l1[0][1]] = "*"
            lj[l1[1][1]] = "*"
            l[0] = "".join(lj)
        for j in l:
            print(j)

    elif l1[0][1]==l1[1][1]:
        lo = l1[0][1]
        if lo!=0:
            for j in l:
                if "*" in j:
                    lj = [*j]
                    lj[lo-1] = "*"
                    j = "".join(lj)
                print(j)
        else:
            for j in l:
                if "*" in j:
                    lj = [*j]
                    lj[lo+1] = "*"
                    j = "".join(lj)
                print(j)
         
    else:
        a1, b1 = l1
        for j in l:
            if "*" in j:
                if j.index("*") == a1[1]:
                    lj = [*j]
                    lj[b1[1]] = "*"
                    j = "".join(lj)
                else:
                    lj = [*j]
                    lj[a1[1]] = "*"
                    j = "".join(lj)
            print(j)
