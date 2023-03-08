#include<stdio.h>

int main(){


    char x;

    printf("\nEnter Your Character : ");
    scanf("%c",&x);

    if(x >= 65 && x<=90){
        printf("%c",(x + 32));
    }

    else{
        printf("%c",x - 32);
    }
    

    printf("\nYour character is : %c", x);
    printf("\nYour Ascii value is : %d", x);


    return 0;
}
