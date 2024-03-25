from collections import deque

left=deque(input())
right=deque()
num=int(input())
while(num):
    n=list(input())
    if n[0]=='L':
        if len(left)>0:
            right.appendleft(left.pop())
    elif n[0]=='D':
        if len(right)>0:
            left.append(right.pop())
    elif n[0]=='B':
        if(len(left)!=0):
            left.pop()
    else:
        left.append(n[2])
    num-=1
for i in left:
    print(i,end='')
for i in right:
    print(i,end='')
    
