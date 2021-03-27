for i in range(int(input())):
    n,k=map(int,input().split())
    o=input()
    x=[i for i in range(len(o))if o[i]=="*"]
    if len(x)<3:
        print(len(x))
    else:
        ans=2
        a=x[0]
        b=x[-1]
        j=0
        while j<len(x):
            if x[j]-a>k:
                a=x[j-1]
                ans+=1
            j+=1

        print(ans)     
                
             
    
