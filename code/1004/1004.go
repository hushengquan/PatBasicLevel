/*
**@Time       : 2019-10-25
**@Author     : HuShengQuan
**@File       : 1004.go
**@Software   : vim
**@type       : pat practice
*/

package main

import (
    "fmt"
)

type Student struct {
    name string
    sno string
    grade uint
}

func main() {
    var n int
    fmt.Scanf("%d", &n)

    var s = make([]Student, n)
    max, min := 0, 0

    for i := 0; i < n; i++ {
        fmt.Scanf("%s%s%d", &s[i].name, &s[i].sno, &s[i].grade)
        if s[i].grade < s[min].grade {
            min = i
        } 
        if s[i].grade > s[max].grade {
            max = i
        }
    }

    fmt.Printf("%s %s\n%s %s", s[max].name, s[max].sno, s[min].name, s[min].sno)
}
