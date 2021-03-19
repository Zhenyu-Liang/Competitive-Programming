x,y,z=map(int,input().split())
a,b,c=map(int,input().split())
ans="NO"
if a-x>-1:
    o=((a-x)+b)-y
    if o>-1 and o+c>=z:
        ans="YES"
     
        
          
        
         

print(ans)
