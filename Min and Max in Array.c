#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int arr[100000], n, max, min;

    printf("Enter size of Array : ");
    scanf("%d", &n);

    printf("Enter elements of Array : ");
    for(int i = 0;i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array entered : ");
    for(int i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }

    max = arr[0];
    for(int i = 1;i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    min = arr[0];
    for(int i = 1;i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("Max : %d", max, "\n");
    printf("Min : %d", min, "\n");


    

    return 0;
}
