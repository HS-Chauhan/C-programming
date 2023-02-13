#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

int main(){

    char str1[20];

    printf("Enter any string : \n");

    
    gets(str1);
    printf("Uppercase : ");
    strupr(str1);
    puts(str1);

    printf("Lowercase : ");
    strlwr(str1);

    puts(str1);

    printf("Reverse : ");
    strrev(str1);
    puts(str1);

    printf("Size : ");
    strlen(str1);
    puts(str1);

    

    return 0;
}
