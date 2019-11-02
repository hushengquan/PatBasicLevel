"""
***@Time    : 2019-10-27
***@Author  : hushengquan
***@File    : 1006.py
***@Software: vim
***@type    : pat practice
"""

num = input()
count = len(num)

number = []
for i in range(count):
    number.append(int(num) % 10)
    num = int(num) / 10

if count == 3:
    for i in range(int(number[2])):
        print('B', end='')
    count -= 1
if count == 2:
    for i in range(int(number[1])):
        print('S', end='')
    count -= 1
if count == 1:
    for i in range(int(number[0])):
        print(i + 1, end='')
