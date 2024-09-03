#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a first number : ");
    scanf("%d",&a);
    printf("Enter a second number : ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("Number1 and Number2 are equal",a,b);
    }
    else
    {
        printf("Number1 and Number2 are not equal",a,b);
    }
    return 0;
}
