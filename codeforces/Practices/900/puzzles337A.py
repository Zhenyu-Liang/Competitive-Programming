a,b=map(int,input().split());*c,=sorted(map(int,input().split()));q=1002
for i in range(b):
 try:
  if(z:=abs(c[i]-c[(a-1)+i]))<q:q=z
 except:0
print(q)
        

