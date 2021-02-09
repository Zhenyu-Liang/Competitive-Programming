def f(q=0,o=0):        
 a,b=map(int,input().split());l=[o:=o+5 for z in range(a)]
 for i in range(a):
  if sum(l[:i+1])>240-b:return i
 return a
print(f())
