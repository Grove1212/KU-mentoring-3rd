def gcd(a,b):
    if a%b==0:
        return b
    else:
        return gcd(b,a%b)

a,b=map(int,input().split())
ans=gcd(a,b)
print(ans)
print(a*b//ans)
