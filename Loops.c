#include<stdio.h>
#include<math.h>

int main(){

    
    int i,start, last;

    printf("\n\n\n\n");

    printf("Enter start position : \n");
    scanf("%d",&start);

    printf("Enter last position : \n");
    scanf("%d",&last);

    for(i = start;i <= last; i++){
        printf("\n Hello world %d", i);
    }


    return 0;
}
