#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter the number of times : ");
    scanf("%d",&n);
    printf("The Natural numbers are : \n");
    do{
        printf("%d\n",i);
        i++;
    }while(i<n);

    return 0;
}
