pp=print
li=list
tp=tuple
bg=1e9
sg=-1e9
rd=round
ss=sorted
sj="".join
nl="\n"


def solve():
    pass

def main():
    for i in range(int(input())):
        solve()

#main()

n = int(input())
z = [*map(int,input().split())]

try:
    z+=z[:z.index(0)]
except:
    pass 

ans = 0
t=0
for i in z:
    if i==1:
        t+=1
    else:
        ans=max(ans, t)
        t=0
ans=max(ans, t)


print(ans)





     
    





