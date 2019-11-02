"""
***@Time    : 2019-10-25
***@Author  : hushengquan
***@File    : 1004.py
***@Software: vim
***@type    : pat practice
"""
n = int(input())
first_student = input().split(' ')
max_name, max_sno, max_grade = first_student[0], first_student[1], int(first_student[2])
min_name, min_sno, min_grade = first_student[0], first_student[1], int(first_student[2])

for i in range(n - 1):
    student = input().split(' ')
    if int(student[2]) > max_grade:
        max_grade = int(student[2])
        max_name = student[0]
        max_sno = student[1]
    if int(student[2]) < min_grade:
        min_grade = int(student[2])
        min_name = student[0]
        min_sno = student[1]

print(max_name, max_sno)
print(min_name, min_sno)
