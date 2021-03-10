num = int(input())

ans = 0
for i in range(num):
    if sum(map(int, input().split()))>1:ans+=1
    

print(ans)

