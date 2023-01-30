#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d, e, total;
    float per;

    printf("enter your marks : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;

    printf("\ntotal marks is %d\n", total);

    per = total * 100 / (5.0 * 100);

    printf("percent is %f\n", per);

    if (per > 91)
        printf("O");
    else
    {
        if (per >= 81 && per <= 90)
            printf("A+");
        else
        {
            if (per >= 71 && per <= 80)
                printf("A");
            else
            {
                if (per >= 61 && per <= 70)
                    printf("B");
                else
                {
                    if(per >= 51 && per <= 60)
                        printf("C");
                    else
                    {
                        printf("Fail");
                    }
                }
                    
            }
        }
    }
    getch();
    return 0;
}
