#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){




    int n, res;

    printf("\nEnter your number : ");
    scanf("%d",&n);
    int cnt = 0, sum = 0;

    while(n > 0){
        res = n % 10;
        sum = sum + res;
        n = n / 10;
    }

    printf("\nSum of digits entered : %d", sum);





    

    return 0;
}
