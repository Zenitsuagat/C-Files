#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter your name : ");
    gets(name);
    int l = strlen(name);
    printf("Length : %d",l);
    return 0;
}
