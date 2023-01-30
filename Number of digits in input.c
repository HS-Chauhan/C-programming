#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){


    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int count = 0;

    while(n > 0){
        count++;
        n = n / 10;
    }

    printf("\nNumber of digits in the number you entered is : %d", count);


    

    return 0;
}
