for i in[*open(0)][1:][1::2]:b=[i for i,v in enumerate([*map(int,i.split())])if i%2!=v%2];print([-1,len(b)//2][len(b)/2==sum(i%2<1 for i in b)])
