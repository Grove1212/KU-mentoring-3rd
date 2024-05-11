dn=[0]*11
dn[0]=1

for i in range(1,11):
    if(dn[i-1]>0):
        dn[i]+=dn[i-1]
    if(dn[i-2]>0):
        dn[i]+=dn[i-2]
    if(dn[i-3]>0):
        dn[i]+=dn[i-3]

num=int(input())
for i in range(num):
     n=int(input())
     print(dn[n])

