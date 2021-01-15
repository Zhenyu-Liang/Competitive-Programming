num = int(input())

for j in range(num):
    i = input()
    if len(i)>10:
        print(i[0] + str(len(i)-2) + i[-1])
    else:
        print(i)

