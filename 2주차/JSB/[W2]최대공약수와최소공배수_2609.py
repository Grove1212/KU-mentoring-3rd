a, b = map(int, input().split())
big = 0
small = 0
r = 0

if a >= b:
    big = a
    small = b
else:
    big = b
    small = a

while 1:
    r = big % small
    big = small
    small = r
    if r == 0:
        break
print(big)

print((a * b) // big)
