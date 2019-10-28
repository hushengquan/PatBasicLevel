"""
***@Time    : 2019-10-28
***@Author  : HuShengQuan
***@File    : 1007.py
***@Software: vim
***@type    : pat practice
"""
import math

def isSu(num):
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False

    return True

def main():
    num = int(input())
    numList = []
    count = 0

    for i in range(2, num + 1):
        if isSu(i):
            numList.append(i)

    for i in range(2, len(numList)):
        if numList[i] - numList[i - 1] == 2:
            count += 1

    print(count)

if __name__ == "__main__":
    main()
