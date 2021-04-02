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
    a,b=map(int,input().split())
    while(a%2>0):
        for i in range(2,a+1):
            if a%i==0:
                a+=i
                b-=1
                break
    print(a+2*b) 
    
    


def main():
    for i in range(int(input())):
        solve()

main()




     
    





