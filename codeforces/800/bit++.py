num = int(input())
ans = 0

for i in range(num):
    operation = input()
    if "++" in operation:
        ans += 1
    else:
        ans -= 1

print(ans)
