# -*- coding: utf-8 -*-
"""[w5]2xn타일링_11726.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1uukbOb_qo6SUJDbTMQyW4vbwCsg9QOIy
"""

N = int(input())
dp=[0]*(N+1)
dp[1] = 1
dp[2] = 2

for i in range(3, N+1):
    dp[i] = dp[i-1] + dp[i-2]

print(dp[N] % 10007)