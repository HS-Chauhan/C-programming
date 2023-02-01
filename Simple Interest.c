#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int pri,rate,time,interest;
    char ch;

    do{
        printf("Enter the principal : ");
        scanf("%d",&pri);

        printf("Enter the rate : ");
        scanf("%d",&rate);

        printf("Enter the time : ");
        scanf("%d",&time);

        interest=(pri*rate*time)/100;
        printf("Simple intrest : %d",interest);

        printf("\nDo you wanna continue?..press(Y/N) : ");
        fflush(stdin);
        scanf("%c",&ch);

      }
       while (ch=='Y' || ch=='y');


    return 0;
}
