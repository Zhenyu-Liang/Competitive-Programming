for i in[*open(0)][1:]:
 a=[*range(0,int(i)+1,2)][1:];b=[*range(1,int(i),2)][:-1];p="YNEOS"[(not(o:=sum(a)-sum(b))%2)::2];print(p)
 if p=="YES":print(*a+b+[o])


