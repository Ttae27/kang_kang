#include <stdio.h>

void isCheck(int *num, int *check)
{
    check[0] = 0;
    for (int i = 1;i < 10;i++)
    {
        if (num[i - 1] % 2 == 1 && num[i + 1] % 2 == 1 && i != 9)
            check[i] = 1;
        else
            check[i] = 0;
    }
}

int main()
{
    int num[10];
    int check[10];
    
    for(int i = 0;i < 10;i++)
        scanf("%d", &num[i]);
    isCheck(num, check);
    for(int i = 0;i < 10;i++)
    {
        if (check[i] == 1)
            printf("%d ", num[i]);
    }
}