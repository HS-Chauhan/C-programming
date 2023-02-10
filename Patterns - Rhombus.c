#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int n;  
    printf("Enter number of rows : ");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
    

    return 0;
}
