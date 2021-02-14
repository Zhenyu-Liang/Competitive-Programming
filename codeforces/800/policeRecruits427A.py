_=input;_();a=_().split();s=0;ans=0
for i in a:
    if int(i)>0:s+=int(i)
    else:
        if s==0:ans+=1
        else:s-=1

print(ans)

        
     
        
