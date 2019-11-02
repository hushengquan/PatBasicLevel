"""
***@Time    : 2019-10-29
***@Author  : hushengquan
***@File    : 1008.py
***@Software: vim
***@type    : pat practice
"""
raw = input().split()
n = int(raw[0])
m = int(raw[1])

list1 = list(input().split())

print(' '.join(list1[n - m:] + list1[:n - m]))
