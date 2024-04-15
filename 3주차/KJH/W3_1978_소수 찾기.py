
arr=[True for a in range(100+1)]

arr[1]=False

for i in range(2,100+1):
    if arr[i]==True:
        j=i*2
    while(j<=100):
        arr[j]=False
        j+=i
num = int(input())
count=0
arry=list(map(int,input().split()))
for i in arry:
    if arr[i]:
        count+=1
print(count)
