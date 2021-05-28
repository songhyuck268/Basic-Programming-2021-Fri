#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0, a = 0, i = 0, sum = 0, add = 1;
    char arr[100];

    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        sum = 0, add = 1;
        scanf("%s", &arr);
        for (a = 0; a < strlen(arr); a++)
        {
            if (arr[a] == 'O')
            {
                sum = sum + add;
                add++;
            }
            else
                add = 1;
        }
        printf("%d\n", sum);
    }
}