N = int(input())
A = list(map(int, input().split()))

NGF = [-1] * N
stack = [] # 인덱스 저장
F = [0] * 1000001

for i in A:
    F[i] += 1

for i in range(N):
    while stack and F[A[stack[-1]]] < F[A[i]]:
        NGF[stack[-1]] = A[i]
        stack.pop()

    stack.append(i)

print(*NGF)
