#include <stdio.h>
int main()
{
    int i, j, k, num, n;
    printf("Enter the value: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n - i - 1; k++)
        {
            printf("  ");
        }

        num = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

