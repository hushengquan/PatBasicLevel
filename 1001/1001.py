"""
***@Time    : 2019-10-22
***@Author  : HuShengQuan
***@File    : 1001.py
***@Software: vim
***@website : https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
***@type    : pat practice
"""

def main():
    num = int(input())
    count = 0
    
    while (num != 1):
        if (num % 2 == 0):
            num = num / 2
        else:
            num = (num * 3 + 1) / 2
        count += 1

    print(count)
    

if __name__ == "__main__":
    main()

