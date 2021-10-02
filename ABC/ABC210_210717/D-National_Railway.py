H, W, C = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

if min(A) < C:
    ini = A.index(min(A))
    fin = A.index(min(A[min[0]-1,min[1]], A[min[0]+1,min[1]], A[min[0],min[1]-1], A[min[0],min[1]+1])
    print(C+A[ini]+A[fin])
