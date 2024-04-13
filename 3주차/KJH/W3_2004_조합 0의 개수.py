def com(a,b):
    count=0
    while a != 0:
        a//=b
        count+=a
    return count

a,b=map(int,input().split())

result1=com(a,5)-com(b,5)-com(a-b,5)
result2=com(a,2)-com(b,2)-com(a-b,2)

print(min(result1,result2))
