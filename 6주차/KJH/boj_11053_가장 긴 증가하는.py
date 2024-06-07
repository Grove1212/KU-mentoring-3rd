num=int(input())
arr=list(map(int,input().split()))
dp=[1]*num # 아무리 작아도 기본 수열의 크기는 1이다. 따라서 1로 초기화

for i in range(1,num):
    for j in range(i):
        if arr[i]>arr[j]:
            dp[i]=max(dp[i],dp[j]+1)
print(max(dp))
            
            
            
