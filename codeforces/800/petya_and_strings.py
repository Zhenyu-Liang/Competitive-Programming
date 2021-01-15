s1 = input().lower()
s2 = input().lower()

if s1 == s2:
    print(0)

else:
    a = sorted([s1,s2])
    if a[-1] == s2:
        print(-1)
    else:
        print(1)


