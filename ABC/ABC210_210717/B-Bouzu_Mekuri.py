N = int(input())
S = list(map(int, input()))

for i in range(N):
    if S[i]==1:
        break

if i%2 == 0:
    print("Takahashi")
else:
    print("Aoki")
