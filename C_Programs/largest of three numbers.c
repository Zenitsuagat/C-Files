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
            printf("1st number is greatest among three");
        }
        else
        {
            printf("3rd number is greatest among three");
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf("2nd number is greatest among three");
        }
        else
        {
            printf("3rd number is greatest among three");
        }
    }
    else
    {
        printf("All are equal");
    }
    return 0;
}
