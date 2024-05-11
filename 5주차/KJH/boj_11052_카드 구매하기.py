n=int(input())
pi=[0]+list(map(int,input().split()))
dn=[0]*(n+1)

for i in range(1,n+1):
    for j in range(1,i+1):
        dn[i]=max(dn[i],dn[i-j]+pi[j])

print(dn[n])
