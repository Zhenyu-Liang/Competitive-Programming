q=input
for _ in[0]*int(q()):
    n=int(q())
    o=sum(int(i)%2 for i in q().split())
    print('NYOE S'[0<o<n+n%2::2])
