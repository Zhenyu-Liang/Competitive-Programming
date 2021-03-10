s = input()

if len(s) == 1:
    print(s)
else:
    print("+".join(sorted(s.split("+"))))


