#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){

    FILE *fp;

    fp = fopen("E:\\filefile.txt", "w"); //opening file

    fprintf(fp, "File handling ");

    fclose(fp); //closing file

    printf("File write success fully");


    

    return 0;
}
