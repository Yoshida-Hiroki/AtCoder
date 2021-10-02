N,K = map(int, input().split())
C = list(map(int, input().split()))

X = 0
for i in range(N-K+1):
    S = C[i:i+K]
    Y = len(set(S))
    if X < Y:
        X = Y
    elif X == K:
        break

print(X)
