n=int(input());_=map(int,input().split());d=dict(zip([*_],range(1,n+1)));print(" ".join(f"{d[i+1]}"for i in range(n)))
