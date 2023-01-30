#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int n, rem;
    printf("Enter your number : ");
    scanf("%d",&n);

    int e = 0, s = 0;

    while(n > 0){
        rem = n%10;
        if(rem%2 == 0){
            e++;
            s = s + rem;
        }

        n = n/10;
    }
    printf("Count is %d\n", e);
    printf("Sum is %d", s);

    

    return 0;
}
