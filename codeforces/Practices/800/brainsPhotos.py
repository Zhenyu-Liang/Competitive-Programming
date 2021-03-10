a,b=map(int,input().split())
ans="#Black&White"
o=[]
for i in range(a):
    o+=[*{*input().split()}]


if not all([1,0][i not in("B","G","W")] for i in o):
    ans="#Color"

print(ans)

