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
y=0
ans = []
*z, = map(int,input().split())
for i in range(n):
    z[i]+=y
    y=max(y, z[i])
print(*z)




     
    





