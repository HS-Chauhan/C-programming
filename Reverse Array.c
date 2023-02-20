#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void reverseArray(int *arr, int start, int end){

    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void printArray(int *arr, int n){
    for(int i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int arr[100000], n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    printf("Enter the elements of the Array : ");
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }

    reverseArray(arr, 0, n - 1);
    printArray(arr, n);




    return 0;
}
