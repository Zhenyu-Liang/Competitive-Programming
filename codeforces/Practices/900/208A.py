a=input()

a = a.replace("WUB"," ").strip()
ans=""
c=0
for i in a:
    if i==" " and c==0:
        ans+=" "
        c=1
    elif i==" ":
        ans+=""
    else:
        ans+=i
        c=0
print(ans)

