#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], merged[size*2];

    printf("Enter elements of the first array in descending order:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array in descending order:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    int i = 0, j = 0, k = 0;
    while(i < size && j < size) {
        if(array1[i] > array2[j]) {
            merged[k] = array1[i];
            i++;
        } else {
            merged[k] = array2[j];
            j++;
        }
        k++;
    }

    while(i < size) {
        merged[k] = array1[i];
        i++;
        k++;
    }

    while(j < size) {
        merged[k] = array2[j];
        j++;
        k++;
    }

    printf("Merged array in descending order: ");
    for(int i = 0; i < size*2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
