#include <stdio.h>

int main(void)
{
    int i = 0, max = 0, num = 0;
    int arr[9] = { 0 };

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            num = i;
        }
    }
    printf("%d\n%d", max, num + 1);
}