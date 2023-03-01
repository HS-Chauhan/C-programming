#include <stdio.h>
#include <stdbool.h>
#include <bool.h>

int main()
{
    int n, temp, reverse = 0;
    printf("Enter a digit: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if (n == reverse)
    {
        printf("%d is a palindrome.\n", n);
    }
    else
    {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
