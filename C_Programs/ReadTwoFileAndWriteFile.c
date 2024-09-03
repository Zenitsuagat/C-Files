#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *sf,*df,*sf2;
    char data1[100],data2[100];
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

    fgets(data1,100,sf);

    printf("Enter the second file to be read : ");
    scanf("%s",&fn2);
    sf2 = fopen(fn2,"r");
    if(sf2 == NULL){
        printf("File doesnt exist\n");
        return 1;
    }
    else{
        printf("File opened\n");
    }

    fgets(data2,100,sf2);

    char fn3[40];
    printf("Enter the file to write : ");
    scanf("%s",&fn3);

    df = fopen(fn3,"a");

    fputs(data1,df);
    fputs(data2,df);

    if(df == NULL){
        printf("Failed to write\n");
        return 1;
    }
    else{
        printf("Wrote\n");
    }

    return 0;
}

