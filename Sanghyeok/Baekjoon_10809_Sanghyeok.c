#include <stdio.h>

int main()
{
    int i = 0, a = 0;
    char arr[100] = { 0 };
    scanf("%s", &arr);
    for (i = 97; i <= 122; i++)
    {
        a = 0;
        while (arr[a] != 0)
        {
            if (arr[a] == (char)i)
                break;
            a++;
        }
        if (arr[a] == (char)i)
            printf("%d ", a);
        else
            printf("-1 ");
    }
}