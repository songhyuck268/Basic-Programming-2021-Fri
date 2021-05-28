#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, gob = 0, i = 0;
    int arr[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);
    gob = a * b * c;
    while (gob > 0)
    {
        i = gob % 10;
        arr[i]++;
        gob = gob / 10;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}