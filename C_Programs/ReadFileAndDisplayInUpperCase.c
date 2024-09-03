#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *sf;
    char data[100];
    char fn1[40];


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

    int i = 0;
    while(data[i] != 0){
        if(data[i] >= 'a' && data[i] <= 'z'){
            data[i] -= 32;
        }
        i++;
    }

    printf("Content in UpperCase : %s",data);

    return 0;
}
