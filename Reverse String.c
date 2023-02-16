#include <stdio.h>
#include <string.h>

void reverse_string(char str[])
{
    int i, j;
    char temp;
    int n = strlen(str);

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
