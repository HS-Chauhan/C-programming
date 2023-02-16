#include <stdio.h>
#include <stdbool.h>

#define ROWS 5
#define COLS 5

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[ROWS][COLS];
    int num = 2; // starting prime number

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            while (!isPrime(num))
            {
                num++;
            }
            arr[i][j] = num;
            num++;
        }
    }

    // Print the 2D array
    printf("The prime number array is:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
