a,b=map(int,input().split());print(-sum(sorted([i for i in map(int,input().split()) if i<0])[:b]))
