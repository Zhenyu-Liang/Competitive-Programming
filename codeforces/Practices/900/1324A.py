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
    a=int(input())
    b=[*map(int,input().split())]
    for i in b:
        if i%2!=b[0]%2:
            print("NO")
            break
    else:
        print("YES")
            

def main():
    for i in range(int(input())):
        solve()

main()




     
    





