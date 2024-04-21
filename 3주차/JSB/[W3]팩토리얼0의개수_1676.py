N = int(input())
result = 1
count = 0

for i in range(1, N+1):
    result *= i

result = str(result)[::-1]

for i in result:
    if i == '0':
        count += 1
    else:
        break

print(count)
