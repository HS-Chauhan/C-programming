#include<stdio.h>
#include<stdbool.h>
#include<math.h>


int sum;

int main(){

   int arr[100000], n;
   

    printf("enter the size of Array : ");
    scanf("%d",&n);

    printf("enter the elements of Array : ");
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);

    }

    printf("Array entered : ");
    for(int i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    for(int i = 0;i < n; i++){
        sum = sum + arr[i];
    }
    printf("Sum of elements entered : %d", sum);

        return 0;
}
