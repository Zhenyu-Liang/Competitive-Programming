a=int(input())
print(a//2)
print(*['2'for _ in" "*(a//2-(a%2>0))]+(['3']*(a%2>0)),end="")
