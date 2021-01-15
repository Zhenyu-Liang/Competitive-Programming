i=int(input())+1

ans = 0
while 1:
    if len(set(f"{i}"))==len(f"{i}"):
        ans = i
        break
    i+=1

print(ans)
