n=int(input());a=input();_=len(a)-[*map(lambda _:_.count("A"),a)].count(1);m=len(a)*0.5
if m==_:print("Friendship")
else:print("Anton"if m>_ else"Danik")

