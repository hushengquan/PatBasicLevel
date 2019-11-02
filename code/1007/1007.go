/*
**@Time       : 2019-10-28
**@Author     : HuShengQuan
**@File       : 1007.go
**@Software   : vim
**@type       : pat practice
*/

package main

import (
    "fmt"
    "math"
)

func isSu(num int) bool {
    if num == 2 || num == 3 {
        return true
    }
    if num % 6 != 1 && num % 6 != 5 {
        return false
    }
    for i := 5; i <= int(math.Sqrt(float64(num))); i += 6 {
        if num % i == 0 || num % (i + 2) == 0 {
            return false
        }
    }

    return true
}

func main() {
    var num int
    fmt.Scanf("%d", &num)

    var count int
    var pre int = 2

    for i := 3; i <= num; i++ {
        if isSu(i) && (i - pre) == 2 {
            count++
        }
        if isSu(i) {
            pre = i
        }
    }

    fmt.Printf("%d", count)
}
