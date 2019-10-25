/*
**@Time       : 2019-10-25
**@Author     : HuShengQuan
**@File       : 1004.c
**@Software   : vim
**@type       : pat practice
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _Student {
    char name[11];
    char sno[11];
    int grade;
}Student;

int main() {
    int n = 0;
    scanf("%d", &n);
    
    Student *s = (Student *)malloc(sizeof(Student) * n);
    int max = 0, min = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", s[i].name, s[i].sno, &s[i].grade);
        if (s[i].grade > s[max].grade) {
            max = i;
        }
        if (s[i].grade < s[min].grade) {
            min = i;
        }
    }

    printf("%s %s\n%s %s", s[max].name, s[max].sno, s[min].name, s[min].sno);
    return 0;
}
