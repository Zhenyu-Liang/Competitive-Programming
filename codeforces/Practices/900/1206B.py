n = int(input())
b = [*map(int,input().split())]
neg = sum(i<0 for i in b)
s = sum(min(abs(i-1),abs(i+1)) for i in b)
if neg%2==1 and b.count(0)==0:
    print(s+2)
else:
    print(s)



