for i in range(int(input())):
    a=int(input())
    b=[1,2]
    while a%sum(b)!=0:
        b+=[sum(b)+1]
    print(a//sum(b))
    
