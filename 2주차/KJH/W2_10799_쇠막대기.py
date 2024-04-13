string=list(input())
sum=0 #막대기 개수
stack =[]
i=0
while(i<len(string)):
    if string[i]=='(':
        stack.append(i)
        i+=1
    else:
        if string[i-1]=='(' and len(stack)>0:
            stack.pop()
            sum+=len(stack)
            i+=1
        else:
            stack.pop()
            sum+=1
            i+=1
print(sum)
