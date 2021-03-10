n=input()
ans="NO"
for i in range(0,len(n)):
    if len(n[i:i+7])<7:
        break
    if len({*n[i:i+7]})==1:
        ans="YES"
        break
     

print(ans)
