﻿#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    scanf("%d %d", &a, &b);
    if (a > b)
        printf(">");
    else if (a < b)
        printf("<");
    else if (a == b)
        printf("==");
}