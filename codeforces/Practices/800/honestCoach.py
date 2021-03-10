for i in range(int(input())):
    input()
    a=sorted([*map(int,input().split())])
    print(min(a[i]-a[i-1]for i in range(1,len(a))))
