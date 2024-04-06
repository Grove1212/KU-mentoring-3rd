a,b=map(int,input().split())

arr=[True for a in range(b+1)]

arr[1]=False

for i in range(2,b+1):
    if arr[i]==True:
        j=i*2
    while(j<=b):
        arr[j]=False
        j+=i

for i in range(a,b+1):
    if arr[i]==True:
        print(i)
        
    
