#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char fl[100];
    printf("Enter the name of the file : ");
    scanf(" %[^\n]",&fl);
    f = fopen(fl,"r");

    if(f == NULL){
        printf("File was not found");
        return 1;
    }
    else{
        printf("File is there\n");
    }
    char data[100];
    printf("Contents : \n");
    while(fgets(data,100,f) != NULL){
        printf("%s",data);
        printf("\n");
    }
    fclose(f);

    return 0;
}

