#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d", j);
            }
            for (j = n - i; j >= 1; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else
        {
            for (j = 1; j <= n - i + 1; j++)
            {
                printf("%d", j);
            }
            for (j = 1; j <= i - 1; j++)
            {
                printf("_");
            }
            for (j = 1; j < i - 1; j++)
            {
                printf("_");
            }
            for (j = n - i + 1; j >= 1; j--)
            {
                printf("%d", j);
            }

            printf("\n");
        }
    }
}
