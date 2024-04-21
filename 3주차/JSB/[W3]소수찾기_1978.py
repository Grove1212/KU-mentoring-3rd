N = int(input())
M = list(map(int, input().split()))
count = 0

for i in M:
    if i==1:#1은 소수가 아니므로 제외
        continue
    for j in range(2,int(i**0.5)+1):
        if i%j==0: #약수가 존재하므로 소수가 아님
            break
    else:
        count += 1
print(count)
