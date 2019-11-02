/*
**@Time       : 2019-10-24
**@Author     : HuShengQuan
**@File       : 1003.go
**@Software   : vim
**@type       : pat practice
*/

package main

import (
    "fmt"
)

func isPAT(ch string) bool {
    if len(ch) < 3 {
        return false
    }

    before, mid, after, flag_before, flag_after := 0, 0, 0, 0, 0

    for i := 0; i < len(ch); i++ {
        if ch[i] != 'P' && ch[i] != 'A' && ch[i] != 'T' {
            return false
        }

        if flag_before == 0 && ch[i] != 'P' {
            before++
        } else if flag_before == 0 && ch[i] == 'P' {
            flag_before = 1
        } else if flag_before == 1 && ch[i] != 'T' && flag_after == 0 {
            mid++
        } else if flag_before == 1 && ch[i] == 'T' && flag_after == 0 {
            flag_after = 1
        } else if flag_after == 1 {
            after++
        }
    }

    if mid == 0 {
        return false
    }

    if (after == mid * before) {
        return true
    }

    return false
}

func main() {
    var n int
    fmt.Scanf("%d\n", &n)

    var ch [102]string
    for i := 0; i < n; i++ {
        fmt.Scanf("%s", &ch[i])
    }

    for i := 0; i < n; i++ {
        if isPAT(ch[i]) {
            fmt.Print("YES")
        } else {
            fmt.Print("NO")
        }

        if i != n - 1 {
            fmt.Println()
        }
    }
}
