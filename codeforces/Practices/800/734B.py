*a,=map(int,input().split())
b=(x:=min([a[0]]+a[-2:]))*256
print(b+min(a[0]-x,a[1])*32)

     


