n=int(input())
count=n//5
if n>=25:
    count+=n//25
if n>=125:
    count+=n//125
print(count)
