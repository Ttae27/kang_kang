#include <stdio.h>

int main()
{
    int num[10];

    for(int i = 0;i < 10;i++)
        scanf("%d", &num[i]);
    for(int i = 0;i < 10;i++)
    {
        if ((num[i - 1] % 2 == 1 && num[i + 1] % 2 == 1) && i != 9)
            printf("%d ", num[i]);
    }
}