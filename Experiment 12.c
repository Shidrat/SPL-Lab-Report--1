#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (i == 1 && j % 4 == 1)
                printf("* ");
            else if (i == 2 && j % 2 == 0)
                printf("* ");
            else if (i == 3 && j % 4 == 3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
