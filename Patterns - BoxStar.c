#include <stdio.h>
int main() {
    int r;
    int c;
 for(r=1;r<=5;r++)
    {
        if(r==1 || r==5)
        {
            for(c=1;c<=5;c++)
            {
                printf("%c",88);
            }
        }
        else
        {
            for(c=1;c<=5;c++)
            {
                if(c==1 || c==5)
                {
                    printf("%c",88);
                }
                else{printf("%c",42);}
            }
        }
        printf("\n");
    }
}
