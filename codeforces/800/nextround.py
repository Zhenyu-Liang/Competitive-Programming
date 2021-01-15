k = int(input().split()[-1])
ans = 0
cases = list(map(int, input().split()))
kth = cases[k-1]


for i in cases:
    if i >= kth and i:
        ans += 1
 
 
 
print(ans)
