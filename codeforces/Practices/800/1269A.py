def ok(a):
    for i in range(2,int(a**.5)):
        if a%i==0:
            return 1


a=int(input())
ans = []

i=a+1
while not ans:
    if ok(i) and ok(i-a):
        print(i, i-a) 
        break
    i+=1  

