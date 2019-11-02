/*
**@Time       : 2019-10-23
**@Author     : HuShengQuan
**@File       : 1002.go
**@Software   : vim
**@website    : https://pintia.cn/problem-sets/994805260223102976/problems/994805324509200384
**@type       : pat practice
*/

package main

import (
    "fmt"
    "strconv"
)

func main() {
    var str []byte
    fmt.Scanf("%s", &str)
    var number = [...]string{"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"}

    num := 0
    for i := 0; i < len(str); i++ {
        num += int(str[i] - '0')
    }

    // 将字符串转换成数字
    numStr := strconv.Itoa(num)

    fmt.Printf("%s", number[int(numStr[0] - '0')])
    for i := 1; i < len(numStr); i++ {
        fmt.Printf(" %s", number[int(numStr[i] - '0')])
    }
}
