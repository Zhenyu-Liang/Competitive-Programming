_=input;_();x=[*map(int,_().split())];s=lambda x,q:[i+1 for i,v in enumerate(x)if v==q];a=s(x,1);b=s(x,2);c=s(x,3);print(len(o:=[*zip(a,b,c)]))
for i in o:print(*i)
