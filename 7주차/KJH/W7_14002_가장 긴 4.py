#가장 긴 증가하는 수열과 같은 방식
#혼자힘으로 풀었나요 ? x
#원소를 선택하는게 좋은가 선택하지 않는게 좋은가
#선택하지 않으면 0

n=int(input())
arr=list(map(int,input().split()))

result=arr[0]
dp=[[] for _ in range(n)]
print(dp)
print(dp)
for i in range(1,n):
    dp[i]=max(result+arr[i],result)
print(max(dp))
