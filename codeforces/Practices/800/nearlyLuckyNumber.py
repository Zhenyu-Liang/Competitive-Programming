def isLucky(n):l={*f"{n}"};return 0<len(l)<3and l.issubset({'4','7'})
_=input();print("YES"if isLucky(sum(1if isLucky(i)else 0for i in _))else"NO")
