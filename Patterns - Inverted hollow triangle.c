#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int n, count = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < count; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        count++;

        printf("\n");
    }

    return 0;
}
