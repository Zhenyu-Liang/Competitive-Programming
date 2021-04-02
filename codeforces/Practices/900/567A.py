pp=print
li=list
tp=tuple
bg=1e9
sg=-1e9
rd=round
ss=sorted
sj="".join
nl="\n"


def solve(n):
    pass    


def main():
    for i in range(int(input())):
        solve()

#main()

input()

b=[*map(int,input().split())]
for i in b:
    try:
        c = b.index(i)
        try:
            x=min(abs(i-b[c-1]),abs(i-b[c+1]))
        except:
            x=abs(i-b[c-1])

        y=max(abs(i-b[0]), abs(i-b[-1]))
        print(x, y)
    except:
        break

     




