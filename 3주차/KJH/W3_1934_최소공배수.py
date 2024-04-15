def fun(a,b):
    if(b==0):
        return a
    else:
        return fun(b,a%b)

count=int(input())
for i in range(count):
    a,b=map(int,input().split())
    num=fun(a,b)
    print((a*b)//num)

