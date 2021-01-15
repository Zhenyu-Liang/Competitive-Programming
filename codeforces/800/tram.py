num = int(input())

ppl = 0
ans = 0

for i in range(num):
    a,b = map(int, input().split())
    ppl-=a
    ppl+=b
    if ppl>ans:
        ans = ppl

        
print(ans)
