/****************************************************
 > @Time       : 2019-10-29
 > @Author     : HuShengQuan
 > @File       : 1008.c
 > @Software   : vim
 > @type       : pat practice
*****************************************************/
#include <stdio.h>

void reverse(int *A, int from, int to)
{
    int mid = (to - from) / 2;
    for (int i = from; i <= from + mid; i++) 
    {
        int tmp = A[i];
        A[i] = A[to - (i - from)];
        A[to - (i - from)] = tmp;
    }
}

int main()
{
    int N = 0, key;
    scanf("%d %d", &N, &key);
    int A[102] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    key = key % N;
    if (key == 1)
    {
        int tmp = A[N - 1];
        for (int i = N - 1; i > 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = tmp;
    }
    else if (key == N || key == 0)
    {
        
    }
    else {
        reverse(A, 0, N - key - 1);
        reverse(A, N - key, N - 1);
        reverse(A, 0, N - 1);
    }

    printf("%d", A[0]);
    for (int i = 1; i < N; i++)
    {
        printf(" %d", A[i]);
    }
    return 0;
}
