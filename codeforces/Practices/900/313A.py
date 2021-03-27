a=input()

if int(a)>0:
    print(a)
else:
    if(x:=int(a[:-1]))>(y:=int(a[:-2]+a[-1])):
        print(x)
    else:
        print(y)
