for i in range(int(input())):
    a=input()
    x=[a.count("1"),a.count("0")]
    if not all(x):
        print("NET")
    else:
        if min(x)%2==0:
            print("NET")
        else:
            print("DA")
