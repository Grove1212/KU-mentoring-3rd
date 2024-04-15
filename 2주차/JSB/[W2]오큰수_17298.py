N = int(input())
A = list(map(int, input().split()))

result = [-1] * N
stack = [] # 인덱스 저장


for i in range(N):
    while stack and A[stack[-1]] < A[i]:
        result[stack[-1]] = A[i]
        stack.pop()

    stack.append(i)

print(*result)
