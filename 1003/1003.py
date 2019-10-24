"""
***@Time    : 2019-10-23
***@Author  : HuShengQuan
***@File    : 1003.py
***@Software: vim
***@type    : pat practice
"""

import re

def main():
    nums = int(input())
    results = [str(0) for i in range(nums)]

    for i in range(nums):
        string = input()
        if ('P' in string) & ('T' in string):
            count_P, count_A, count_T = string.count('P'), string.count('A'), string.count('T')
            if (count_P == 1) & (count_T == 1) & (string.index('P') < string.index('T')):
                if (count_A != 0) & (count_P + count_A + count_T == len(string)):
                    tmp = re.split('P|T', string)
                    results[i] = "YES" if tmp[0].count('A') * tmp[1].count('A') == tmp[2].count('A') else "NO"
                else:
                    results[i] = "NO"
            else:
                results[i] = "NO"
        else:
            results[i] = "NO"
        
    for v in results:
            print(v)

if __name__ == "__main__":
    main()

