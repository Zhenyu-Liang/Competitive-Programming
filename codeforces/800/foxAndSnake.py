a,b=map(int,input().split());c=0;p=print
for i in range(a):
 if i&1==0:p("#"*b)
 else:
  _=f"#{'.'*(b-1)}"
  if c:p(_);c=0
  else:p(_[c==0:]+"#"*(c==0));c=1
