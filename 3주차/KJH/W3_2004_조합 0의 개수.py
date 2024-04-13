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

우선 이 문제는 혼자 힘으로 풀지 못했습니다.
팩토리얼과 같은 방식으로 계산하되, 분모와 분자를 따로 구해서 0개수의 차를 구하면 될줄 알았는데 자꾸만 틀렸다고 메세지가 떴습니다
그래서 찾아본결과는 다음과 같았습니다. 아직 이해는 안되었으나 체념하고 풀었습니다..

조합 0의 개수는 팩토리얼과 다르게
"5의 개수 <= 2의 개수"가 성립하지 않습니다.
따라서 팩토리얼과 다르게 2의 등장횟수도 고려해야 합니다.
def com(a,b): #b는 2,5가능
    count=0
    while a != 0:
        a//=b
        count+=a
    return count

분모 0의 개수에서 분자 0의 개수를 빼주고 5의 경우와 2의 경우를 비교하는 코드입니다.
result1=com(a,5)-com(b,5)-com(a-b,5)
result2=com(a,2)-com(b,2)-com(a-b,2)

print(min(result1,result2))
