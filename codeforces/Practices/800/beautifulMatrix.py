m = [input().split()for i in"_"*5]
indexOf1 = [[i,v.index("1")] for i,v in enumerate(m) if "1" in v][0]
row = indexOf1[0]
column = indexOf1[1] 
center = [2,2]
print(abs(center[0]-row)+abs(center[1]-column))







