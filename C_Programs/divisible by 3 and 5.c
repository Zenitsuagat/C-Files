#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number : ",a);
    scanf("%d",&a);
    printf("Enter the second number : ",b);
    scanf("%d",&b);

    if ((a%3==0) && (b%5==0))
    {
        printf("%d and %d is divisible by 3 and 5",a,b);
    }
    else
    {
        printf("%d and %d is not divisible by 3 and 5",a,b);
    }
    return 0;
}
