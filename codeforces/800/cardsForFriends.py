
for i in[*open(0)][1:]:
    a,b,c=map(int,i.split())
    ans=1
    while a%2==0:
       a=a//2
       ans*=2

    while b%2==0:
       b=b//2
       ans*=2

    if ans>=c:print("YES")
    else:print("NO")

         
         
