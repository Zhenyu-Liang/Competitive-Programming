s=lambda n:[n[i:j]for i in range(len(n)) for j in range(i+1, len(n)+1)]+[""]             
for i in range(int(input())):
    a=input()
    b=input()
    c=len(max({*s(a)}&{*s(b)},key=len))
    print(len(a)-c+len(b)-c)
