a,b=map(int,input().split())
for i in range(a,b+1):
    if len({*str(i)})==len(str(i)):
        print(i)
        break
else:
    print(-1) 
