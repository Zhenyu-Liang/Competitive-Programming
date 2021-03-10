n=int(input())
a=[*map(int,input().split())]
s=0
d=0
for i in range(n//2):
    if a[0]>a[-1]:
        s+=a.pop(0)
    else:
        s+=a.pop(-1)
    if a[0]>a[-1]:
        d+=a.pop(0)
    else:
        d+=a.pop(-1)

if a:
    s+=a[0]
print(*[s,d])
