from collections import Counter

n=int(input())
arr=list(map(int,input().split()))

array=Counter(arr)
N=[-1]*n

stack=[]

for i in range(n):
    while stack and array[arr[stack[-1]]] < array[arr[i]]:
        N[stack.pop()]=arr[i]
    stack.append(i)
print(*N)
