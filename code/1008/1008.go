/*
**@Time       : 2019-10-29
**@Author     : HuShengQuan
**@File       : 1008.go
**@Software   : vim
**@type       : pat practice
*/
package main

import "fmt"

func main() {
    var n int
    var m int
    fmt.Scanf("%d%d", &n, &m)
    A := make([]int, n)

    for i := 0; i < n; i++ {
        num := 0
        fmt.Scanf("%d", &num)
        A[i] = num
    }

    m = m % n
    S := append(A[n - m:], A[:n - m]...)

    fmt.Printf("%d", S[0])
    for i := 1; i < n; i++ {
        fmt.Printf(" %d", S[i])
    }
}
