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

n=int(input())
*a,=sorted(map(int,input().split()))[::-1]
b=[i%2 for i in a]
# first move
x = 0
try:
    if b.count(1)>b.count(0):
        x=1
        c=b.index(1)
        b.pop(c)
        a.pop(c)
    else:
        c=b.index(0)
        b.pop(c)
        a.pop(c)

except:
    print(sum(a))

else:
    for i in range(len(a)):
        try:
            if x==1:
                c=b.index(0)
                a.pop(c)
                b.pop(c)
                x=0
            else:
                c=b.index(1)
                a.pop(c)
                b.pop(c)
                x=1

        except:
            break

    print(sum(a))        
            






     
    





