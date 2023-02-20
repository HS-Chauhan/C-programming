#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    int arr1[100000], arr2[100000], n, m;

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

    printf("Intersection : ");
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }

    return 0;
}
