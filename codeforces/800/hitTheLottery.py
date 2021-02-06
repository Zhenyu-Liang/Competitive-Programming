n=int(input());a=[100,20,10,5,1];c,_=0,0
while n:o=n//a[_];n-=(a[(_:=_+(o==0))])*o;c+=o
print(c)
            
