m1 = input().split()
m2 = input().split()
m3 = input().split()
m4 = input().split()
m5 = input().split()
m = [m1,m2,m3,m4,m5]
center_index = [2,2]
indexOf1 = [[i,v.index("1")] for i,v in enumerate(m) if "1" in v][0] # [1,4]
ans = abs(center_index[0]-indexOf1[0])+abs(center_index[1]-indexOf1[1])
print(ans)









