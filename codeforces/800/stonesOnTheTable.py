num = int(input())
stones = input()

if len(set(stones))==1:
    print(len(stones)-1)
else:
    ans = 0
    for i in range(1,len(stones)):
        if stones[i] == stones[i-1]:
            ans+=1
    print(ans)

