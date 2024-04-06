while(True):
    b=int(input())
    if(b==0):
        break
    prime=[True for i in range(b+1)]
    prime[1]=False
    for i in range(2,b+1):
        if prime[i]==True:
            j=i*2
            while j<b+1:
                prime[j]=False
                j+=i
        
    for i in range(2,b//2+1):
        if(prime[b-i]):
            print(b,"=",i,"+",b-i)
            break
