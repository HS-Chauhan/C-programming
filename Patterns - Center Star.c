#include <stdio.h>

int main()
{
    int r;
    int c;
    for (r = 1; r <= 5; r++)
    {
        if (r == 1 || r == 5)
        {
            for (c = 1; c <= 5; c++)
            {
                printf("X");
            }
        }
        else
        {
            for (c = 1; c <= 5; c++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
