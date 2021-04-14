for i in range(int(input())):
    a = int(input())
    *b, = map(int, input().split())
    for i in range(len(b)):
        if b.count(b[i]) == 1:
            print(i+1)
            break
