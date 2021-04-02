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
    a,b,c,d=map(int,input().split())
    if b>=a:
        print(b)
    elif d>=c:
        print(-1)
    else:
        print(b+(0--(a-b)//(c-d))*c)
        

def main():
    for i in range(int(input())):
        solve()

main()




     
    





