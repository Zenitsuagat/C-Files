#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Enter num3 : ");
    scanf("%d",&num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is max",num1);
        }
        else
        {
            printf("%d is max",num3);
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf("%d is max",num2);
        }
        else
        {
            printf("%d is max",num3);
        }
    }
    else
    {
        printf("All are equal");
    }
return 0;
}
