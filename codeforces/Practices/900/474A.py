x="qwertyuiopasdfghjkl;pzxcvbnm,.//"
a=input()
b=input()

if a=="L":
    print("".join(x[x.index(i)+1] for i in b))
else:
    print("".join(x[x.index(i)-1] for i in b))
