n=int(input())
c=0
i=0
while 1:
    c+=sum(range(1,i+2))
    if c>n:break
    i+=1

print(i)
