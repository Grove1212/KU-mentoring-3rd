#n=int(input())

#dp=[0]*(n+1)

#dp[1]=1

#for i in range(2,n+1):
#    ans=i-int(i**(1/2))**2
#    dp[i]=dp[ans]+1
#print(dp[n])

# 최대 제곱수를 빼면 된다고 생각했는데 아니다 반례 존재 ex43

#코드를 조금만 수정하면 됨

n=int(input())

dp=[0]+[1000]*(n)

dp[1]=1

for i in range(2,n+1):
    for j in range(1,int(i**0.5)+1):
        if i>=j*j:
            a=dp[i-j*j]+1
            if a <dp[i]:
                dp[i]=a
print(dp[n])
