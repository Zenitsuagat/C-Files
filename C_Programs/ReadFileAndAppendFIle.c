#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *sf,*df;
    char data[100];
    char fn1[40],fn2[40];


    printf("Enter the file to be read : ");
    scanf("%s",&fn1);
    sf = fopen(fn1,"r");
    if(sf == NULL){
        printf("File doesnt exist\n");
        return 1;
    }
    else{
        printf("File opened\n");
    }

    fgets(data,100,sf);

    printf("Enter the file to write : ");
    scanf("%s",&fn2);

    df = fopen(fn2,"a");

    fputs(data,df);

    if(df == NULL){
        printf("Failed to Append\n");
        return 1;
    }
    else{
        printf("Appended\n");
    }

    return 0;
}

