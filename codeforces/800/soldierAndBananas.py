f = [*map(int, input().split())]
s = f[-1]*f[0]/f[0]
t = int((f[0]*(s*(s+1)/2)))
if t>f[1]:
    print(t-f[1])
else:
    print(0)
