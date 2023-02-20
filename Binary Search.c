#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int binarySearch(int arr[], int left, int right, int key){
    int mid = (left + right) / 2;
    if(right >= left){
        //base case
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            return binarySearch(arr, mid + 1, right, key);
        }
        else{
            return binarySearch(arr, mid - 1, left, key);
        }
    }
}


int main(){

    int arr[100000], n, key;

    printf("Enter size of Array : ");
    scanf("%d", &n);

    printf("Enter elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key : ");
    scanf("%d", &key);

    int ans = binarySearch(arr, 0, n - 1, key);

    if (ans != -1)
    {
        printf("Found on index : %d", ans);
    }
    else
    {
        printf("Not found");
    }

    return 0;
}
