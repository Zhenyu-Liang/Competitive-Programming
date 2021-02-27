for i in[*open(0)][2::2]:
    *a,=map(int,i.split());c=0;b="YES"
    for i,j in enumerate(a):
        c+=j-i
        if 0>c:b="NO";break
    print(b)
