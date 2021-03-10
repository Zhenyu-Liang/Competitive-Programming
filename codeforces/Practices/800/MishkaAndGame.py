z=0
for _ in[*open(0)][1:]:a,b=map(int,_.split());z+=1*(a>b)or-1*(b>a)
print([["Mishka","Chris"][z<0],"Friendship is magic!^^"][z==0])
