# -*- coding: utf-8 -*-
"""[w5]카드구매하기_11052.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/12pRb2DKIeBvc8ssuzMNCRqUFgoviQyOo
"""

N = int(input())
p = [0] + list(map(int,input().split()))
dp = [0 for _ in range(N+1)]

for i in range(1,N+1):
    for k in range(1,i+1):
        dp[i] = max(dp[i], dp[i-k] + p[k])

print(dp[i])