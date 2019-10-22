/*
**@Time       : 2019-10-22
**@Author     : HuShengQuan
**@File       : 1001.go
**@Software   : vim
**@website    : https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
**@type       : pat practice
*/
package main

import (
    "fmt"
)

func main() {
    var n uint16
    var count uint8

    fmt.Scanf("%d", &n)

    for n != 1 {
        count++
        if n % 2 == 0 {
            n /= 2
        } else {
            n = (3 * n + 1) / 2
        }
    }

    fmt.Printf("%d\n", count)
}
