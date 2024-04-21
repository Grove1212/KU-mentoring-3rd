S = input()

stack=[]
count = 0 # 막대기 갯수

for i in range(len(S)):
    if S[i] == "(":
        stack.append("(")

    else : # ")"이라면
        if S[i-1]=="(": # 레이저다
            stack.pop()
            count+=len(stack)

        else :
            stack.pop()
            count+=1
print(count)
