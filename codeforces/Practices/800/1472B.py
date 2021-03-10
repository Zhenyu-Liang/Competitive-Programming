for i in[*open(0)][2::2]:
   *q,=map(int,i.split())
   a=(c:=0--q.count(2)//2)
   b=(q.count(2)-a)*2
   a*=2
   if (z:=q.count(1))<(v:=a-b):
       print("NO")
   else:
       if (z-v)%2==0:
           print("YES")
       else:
           print("NO")
       
       



