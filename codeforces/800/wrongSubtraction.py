ans,b = [*map(int,input().split())]


for i in range(b):
    if str(int(ans))[-1]=="0":
        ans/=10
    else:
        ans-=1

print(int(ans))
