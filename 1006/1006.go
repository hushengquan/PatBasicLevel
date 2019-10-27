/*
**@Time       : 2019-10-27
**@Author     : HuShengQuan
**@File       : 1006.go
**@Software   : vim
**@type       : pat practice
*/

package main

import "fmt"

func main() {
    var num int
    fmt.Scanf("%d", &num)

    count, n := 0, num
    for n != 0 {
        count++
        n /= 10
    }

    if count == 3 {
        n = num / 100
        for i := 1; i <= n; i++ {
            fmt.Print("B")
        }
        count--
        num %= 100
    }
    
    if count == 2 {
        n = num / 10
        for i := 1; i <= n; i++ {
            fmt.Print("S")
        }
        count--
    }

    if count == 1 {
        for i := 1; i <= num % 10; i++ {
            fmt.Printf("%d", i)
        }
    }
}
