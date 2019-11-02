/***********************************************
 > @Time       : 2019-10-28
 > @Author     : hushengquan
 > @File       : 1007.c
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include<stdio.h>
#include<math.h>

int isSu(int num)
{
    if (num == 2 || num == 3) 
    {
        return 1;
    }
    if (num % 6 != 1 && num % 6 != 5)
    {
        return 0;
    }

    for (int i = 5; i <= sqrt(num); i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0) 
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num = 0;
    scanf("%d", &num);

    int count = 0, pre = 2;
    for (int i = 3; i <= num; i++)
    {
        if (isSu(i) && (i - pre == 2))
        {
            count++;
        }
        if (isSu(i))
        {
            pre = i;
        }
    }

    printf("%d", count);
    return 0;
}
