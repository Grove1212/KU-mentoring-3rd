num=int(input())
arr=list(map(int,input().split()))

stack=[]

N=[-1] * num

for i in range(num):
    while stack and arr[stack[-1]]<arr[i]:
        N[stack.pop()]=arr[i]
    stack.append(i)

print(*N)
