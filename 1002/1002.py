"""
***@Time    : 2019-10-22
***@Author  : HuShengQuan
***@File    : 1002.py
***@Software: vim
***@website : https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
***@type    : pat practice
"""

def main():
    number = ["ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"]
    num = list(input())
    n = 0

    for v in num:
        n += int(v)

    n = list(str(n))
    flag = 0
    for v in n:
        if (flag == 0):
            print(number[int(v)], end="")
            flag = 1
        else:
            print(" " + number[int(v)], end="")

if __name__ == "__main__":
    main()

