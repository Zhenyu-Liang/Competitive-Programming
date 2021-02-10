_=input;_();c=[];o=0
for v in dict.fromkeys(map(int,_().split())):c+=[v];o+=abs((min(c)<v<max(c))-1)
print(o-1)
