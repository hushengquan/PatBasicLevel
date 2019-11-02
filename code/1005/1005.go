/*
**@Time       : 2019-10-26
**@Author     : HuShengQuan
**@File       : 1005.go
**@Software   : vim
**@type       : pat practice
*/

package main

import (
    "fmt"
    "sort"
)

var book [101]int

func Callatz(n int) {
    for n != 1 {
        if n % 2 == 0 {
            n /= 2
            if n <= 100 && n > 1 {
                if book[n] == 1 {
                    return
                }
                book[n] = 1
            }
        } else {
            n = (3 * n + 1) / 2
            if n <= 100 && n > 1 {
                if book[n] == 1 {
                    return
                }
                book[n] = 1
            }
        }
    }
}

func main() {
    var n, flag int
    fmt.Scanf("%d", &n)
    
    ans := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scanf("%d", &ans[i])
        Callatz(ans[i])
    }

    sort.Ints(ans)
    for i := n - 1; i >= 0; i-- {
        if book[ans[i]] == 0 {
            if flag == 0 {
                fmt.Printf("%d", ans[i])
                flag = 1
            } else {
                fmt.Printf(" %d", ans[i])
            }
        }
    }
}
