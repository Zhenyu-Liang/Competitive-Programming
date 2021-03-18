a,b,c=map(int,input().split())
x,y,z=map(int,input().split())
n=int(input())

n-=(0--(a+b+c)//5)+(0--(x+y+z)//10)

if n>=0:
    print("YES")
else:
    print("NO")
