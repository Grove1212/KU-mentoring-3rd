string=input()

string=list(string)
stack=[]
i=0
while(i<len(string)):
    if string[i]=='<':
        if len(stack)==0:
            while(string[i]!='>'):
                print(string[i],end='')
                i+=1
            print('>',end='')
        else:
            while(len(stack)>0):
                print(stack.pop(),end='')
    elif string[i]==' ':
        while(len(stack)>0):
            print(stack.pop(),end='')
        print(' ',end='')
        i+=1
    else:
        if(string[i]!='>'):
            stack.append(string[i])
        i+=1
while(len(stack)):
            print(stack.pop(),end='')
