#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size], count = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                break;
            }
        }
    }

    printf("The total number of duplicate elements in the array is %d\n", count);

    return 0;
}
