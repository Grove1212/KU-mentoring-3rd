n=int(input())
a,b=1,3
if n==1:
    print('1')
    exit(0)
elif n==2:
    print('3')
    exit(0)
else:
    for i in range(1,n):
      a,b=b,2*a+b
print(a%10007)
