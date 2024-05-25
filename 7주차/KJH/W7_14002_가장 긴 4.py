#가장 긴 증가하는 수열과 같은 방식
#혼자힘으로 풀었나요 ? x
#원소를 선택하는게 좋은가 선택하지 않는게 좋은가
#선택하지 않으면 0

n=int(input())
arr=list(map(int,input().split()))
dp=[1]*n
for i in range(n):
    for j in range(i):
        if arr[i]>arr[j]:
            dp[i]=max(dp[j]+1,dp[i])
M = max(dp)
print(M)

arr2=[]
for i in range(n-1,-1,-1):
    if dp[i]==M:
        arr2.append(arr[i])
        M-=1
arr2.sort()
arr2=list(map(str,arr2)) #join함수는 str만 가능
print(" ".join(arr2)) #join이 아닌 for문으로도 출력 가능)
