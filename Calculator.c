#include<stdio.h>
#include<math.h>

int main(){
    
    int res, var1, var2;
    char x;

    printf("\nEnter first value : ");
    scanf("%d", &var1);

    printf("\nEnter second value : ");
    scanf("%d", &var2);

    printf("\nEnter 1 for addition");
    printf("\nEnter 2 for subtraction");
    printf("\nEnter 3 for multiplication");
    printf("\nEnter 4 for division");

    

    printf("\nEnter the operation: ");
    fflush(stdin);
    scanf("%c",&x);

    switch(x)
    {
        case 'A' : case 'a' : case '1': case '+' :
        res = var1 + var2;
        printf("\n Addition %d", res);
        break;

        case 'S': case 's' : case '2' : case '-' :
        res = var1 - var2;
        printf("\nSubtraction %d", res);
        break;

        case 'M': case 'm' : case '3' : case '*' :
        res = var1 * var2;
        printf("\nMultiplication %d", res);
        break;

        case 'D': case 'd' : case '4' : case '/' :
        res = var1 / var2;
        printf("\nDivision %d", res);
        break;

        default:
        printf("\nInvalid choice");
    }



  
    return 0;
}
