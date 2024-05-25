n=int(input())
arr=[0]+list(map(int,input().split()))

dp=[0]*(n+1)

if max(arr[1:])<0:
    M=max(arr[1:])
    
    
else:
    for i in range(1,n+1):
        dp[i]=max(dp[i-1]+arr[i],0)
    M=max(dp[1:])
print(M)

# index 처리의 번거로움을 해결하기 위해 배열 앞에 [0]을 추가시킴
# 배열의 모든수가 음수일 경우 임의로 추가시킨 0이 최대값이 될 수 있음
# 따라서 [1:] slice를 사용하여 맨 앞의 0을 제외하고 계산
