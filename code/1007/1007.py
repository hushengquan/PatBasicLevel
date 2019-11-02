"""
***@Time    : 2019-10-28
***@Author  : hushengquan
***@File    : 1007.py
***@Software: vim
***@type    : pat practice
"""
N = int(input())

flag = [1] * (N + 2)
flag[0] = flag[1] = 0
result = []

for i in range(2, N + 1):
    if flag[i]:
        result.append(i)
        p = 2
        while i * p <= N:
            flag[i * p] = 0
            p += 1

count = 0
for i in range(len(result) - 1):
    if (result[i + 1] - result[i]) == 2:
        count += 1

print(count)
