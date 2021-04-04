tp=tuple
bg=1e9
sg=-1e9
rd=round
ss=sorted
sj="".join
nl="\n"



def solve():
    n=int(input())
    if n>45:
        print(-1)
    elif n<10:
        print(n)
    else:
        a=[9, 17, 24, 30, 35, 39, 42, 44, 45]
        c=0
        for i in range(len(a)):
            if n<=a[i]:
                c=i
                break
        b="123456789"[::-1]
        r=b[:c]
        z=abs(n-sum(map(int,r)))
        r=r[::-1]
        print("".join(map(str, sorted([int(z), int(r)]))))
        

       


def main():
    for i in range(int(input())):
        solve()


main()


'''
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24  25 30

1 2 3 4 5 6 7 8 9 19 29 39 49 59 69 79 89 189 289 389 489 589 689 789 1789
'''
    





