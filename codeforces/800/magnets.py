w=[input()for i in range(int(input()))];_=[1*(w[i+1]!=w[i])for i in range(len(w)-1)]+[1];print(sum(_))
