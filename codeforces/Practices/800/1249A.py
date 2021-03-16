def ok(n):
   c=1e+9
   a=sorted(n)
   for i in range(len(n)-1):
        if (o:=abs(a[i]-a[i+1]))<c:
            c=o
   return c>1

for i in[*open(0)][2::2]:
    a=[*map(int,i.split())]
    if ok(a):
        print(1)
    else:print(2)
        
