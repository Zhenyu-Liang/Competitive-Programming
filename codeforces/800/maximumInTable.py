n=int(input())
l=[1]*(n)

for i in range(n-1):
    c=1
    b=[1]
    for j in range(n-1):
        c+=l[j+1]
        b+=[c]
    l=b[:]

print(max(l))
