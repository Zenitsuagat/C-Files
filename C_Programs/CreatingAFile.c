#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char fl[100];
    printf("Enter the name of the file : ");
    scanf(" %[^\n]",&fl);
    f = fopen(fl,"w");

    if(f == NULL){
        printf("File was not created");
    }
    else{
        printf("File Created successfully");
    }
    fclose(f);
    return 0;
}
