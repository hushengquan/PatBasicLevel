"""
***@Time    : 2019-10-26
***@Author  : hushengquan
***@File    : 1005.py
***@Software: vim
***@type    : pat practice
"""
n = int(input())
numbers = [int(i) for i in input().split()]
book = []
flag_numbers = numbers[:]

for i in numbers:
    if i not in book:
        while i != 1:
            if i % 2 == 0:
                i /= 2
            else:
                i = (3 * i + 1) / 2
            book.append(i)
    else:
        flag_numbers.remove(i)

flag_numbers.sort(reverse=True)

output = []
for i in flag_numbers:
    if i not in book:
        output.append(str(i))

print(' '.join(output))
