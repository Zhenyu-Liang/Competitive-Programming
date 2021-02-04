_=input
p=int
o=p(_())
a=[*map(p,_().split())]
x=a.index(max(a))
y=o-1-a[::-1].index(min(a))
print(x+o-1-y-(x>y))
