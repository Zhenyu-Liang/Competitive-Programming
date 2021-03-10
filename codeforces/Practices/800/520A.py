_=input
a=int(_())
b,c=_(),_()
ans=0
for i in range(a):
    ans+=min(abs(int(b[i])-int(c[i])),10-abs(int(c[i])-int(b[i])))

print(ans)
