﻿#include <stdio.h>

int main(void)
{
    int j, i, a;

    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}