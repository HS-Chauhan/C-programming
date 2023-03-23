
#include <stdio.h>


int x;

void autoStorageClass()
{

    printf("\nDemonstrating auto class\n\n");

    
    auto int a = 32;

    
    printf("Value of the variable 'a'"
           " declared as auto: %d\n",
           a);

   
}

void registerStorageClass()
{

    printf("\nDemonstrating register class\n\n");

    
    register char b = 'G';

  
    printf("Value of the variable 'b'"
           " declared as register: %d\n",
           b);

    
}

void externStorageClass()
{

    printf("\nDemonstrating extern class\n\n");

    
    extern int x;

   
    printf("Value of the variable 'x'"
           " declared as extern: %d\n",
           x);

 
    x = 2;

    
    printf("Modified value of the variable 'x'"
           " declared as extern: %d\n",
           x);

}

void staticStorageClass()
{
    int i = 0;

    printf("\nDemonstrating static class\n\n");

    printf("\nLoop started:\n");

    for (i = 1; i < 5; i++)
    {

        
        static int y = 5;

        
        int p = 10;
        y++;
        p++;

       
        printf("\nThe value of 'y', "
               "declared as static, in %d "
               "iteration is %d\n",
               y, i);

        printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n",
               p, i);
    }

    printf("\nLoop ended:\n");

}

int main()
{

    printf("A program to demonstrate"
           " Storage Classes in C\n\n");

    
    autoStorageClass();

    
    registerStorageClass();

    
    externStorageClass();

    
    staticStorageClass();

   
    printf("\n\nStorage Classes demonstrated");

    return 0;
}
