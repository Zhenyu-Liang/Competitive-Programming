for i in[*open(0)][1:]:
    *a,=range(1,int(i)+1)
    a=sorted(a)[::-1]
    if len(a)>2:
        a+=[a.pop(a[0--len(a)//2])]
    print(*a)
         
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
