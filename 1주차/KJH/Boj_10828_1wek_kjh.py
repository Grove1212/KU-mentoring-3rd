import sys
num = int(sys.stdin.readline())
arr=[]

for i in range(num):
    com = sys.stdin.readline().split()
    
    if com[0]=='push':
        arr.append(com[1])
    elif com[0]=='pop':
        if len(arr)==0:
            print(-1)
        else:
            print(arr.pop())
    elif com[0]=='size':
        print(len(arr))
    elif com[0]=='empty':
        if len(arr)==0:
            print('1')
        else:
            print('0')
    elif com[0]=='top':
        if len(arr)==0:
            print(-1)
        else:
            print(arr[-1])
