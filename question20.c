#include<stdio.h>
int main()
{
    int i, j, num = 1;
    int m[7][7] = {0};
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
            if (j == i || 8 - i == j)
                m[i - 1][j - 1] = num;
        if (i < 4)
            num++;
        else
            --num;
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (m[i][j] == 0)
                printf(" ");
            else
                printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}