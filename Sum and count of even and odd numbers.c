#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int i;
    int evencount = 0;
    int evensum = 0;
    int oddcount = 0;
    int oddsum = 0;

    for(i = 1;i <= 1000; i++){
        if(i%2 == 0){
            printf("\n even %d", i);
            evencount++;

            evensum = evensum + i;
    }
    else{
        printf("\n odd %d", i);
        oddcount++;

        oddsum = oddsum + i;
    }
    }

    printf("\nThe number of even numbers are : %d", evencount);
    printf("\nThe Sum of even numbers is : %d", evensum);

    printf("\nThe number of even numbers are : %d", oddcount);
    printf("\nThe Sum of even numbers is : %d", oddsum);

    return 0;
}
