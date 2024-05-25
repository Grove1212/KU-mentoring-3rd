N,K = map(int,input().split())

arr=[[1]*(N+1) for i in range(K)] #2차원 배열 생성
 
for k in range(1,K):
    for j in range(1,N+1):
        arr[k][j]=arr[k-1][j]+arr[k][j-1]

print(arr[K-1][N]%1000000000)


