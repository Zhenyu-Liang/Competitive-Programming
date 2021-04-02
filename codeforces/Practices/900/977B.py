p=print
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

a=int(input())
b=input()
c={}
for i in range(1,len(b)):
    d=b[i-1]+b[i]    
    if d in c:
        c[d]+=1
    else:
        c[d]=1

print(sorted(c.items(), key=lambda i:i[1])[-1][0])


#main()




     
    





