#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int j;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }

            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }

            for (j = i - 1; j >= 1; j--)
            {
                printf("%d", j);
            }

            printf("\n");
        }
        else
        {
            for (j = 1; j < i - n + 1; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * n - i; j++)
            {
                printf("%d", j);
            }
            for (j = 2 * n - i - 1; j >= 1; j--)
            {
                printf("%d", j);
            }

            printf("\n");
        }
    }
}
