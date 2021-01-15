word = input()

u = len("".join(i for i in word if i.isupper()))
l = len("".join(j for j in word if j.islower()))

if l>u or l==u:
    print(word.lower())

else:
    print(word.upper())
