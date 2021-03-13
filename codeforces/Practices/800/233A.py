a=[*range(1,int(input())+1)][::-1]
if len(a)%2>0:
    print(-1)
else:
    print(*a)
    
