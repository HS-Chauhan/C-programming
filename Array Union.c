#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int arr1[100000], arr2[100000], n, m, flag;

    printf("Enter size of Array 1 : ");
    scanf("%d", &n);

    printf("Enter elements of Array 1 : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of Array 2 : ");
    scanf("%d", &m);

    printf("Enter elements of Array 2 : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the two Arrays : ");

    for(int i = 0;i < n; i++){
        printf("%d ", arr1[i]);
    }

    for(int j = 0;j < m; j++){
        flag = 0;
        for(int i = 0;i < n; i++){
            if(arr1[i] == arr2[j]){
                flag = 1;
                break;
            }
        }

        if(flag != 1){
            printf("%d ", arr2[j]);
        }
    }

    return 0;
}
