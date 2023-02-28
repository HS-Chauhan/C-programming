#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int i, j, space, rows = 8, star = 0;

    
    for (i = 0; i < rows; i++)
    {
        if (i < 5)
        {
            
            for (space = 1; space < 5 - i; space++)
            {
                printf(" ");
            }
            
            while (star != (2 * i + 1))
            {
                printf("*");
                star++;
                ;
            }
            star = 0;
            printf("\n");
        }
        else
        {
            for (j = 0; j < 9; j++)
            {
                if ((int)(j / 3) == 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
