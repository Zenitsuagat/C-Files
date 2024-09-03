#include<stdio.h>
void main()
{
    int i=0,n;
    printf("Enter the number of times : ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<n);
}
