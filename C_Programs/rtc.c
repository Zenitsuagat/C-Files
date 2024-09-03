#include<stdio.h>
int main()
{
    printf("                                                   Rathinam Group Of institution");
    int b,t,x;
    char n,d;
    printf("\nName:");
    scanf("%s",&n);
    printf("\nDepartment:");
    scanf("%s",&d);
    printf("\nBus Fee:");
    scanf("%d",&b);
    printf("\nTution Fee:");
    scanf("%d",&t);
    x=b+t;
    printf("\nTotal Fee:");
    printf("%d",x);
    return 0;
}
