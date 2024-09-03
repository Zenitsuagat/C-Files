#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is a positive number",x);
    }
    else if(x<0)
    {
        printf("%d is a negative number ",x);
    }
    else
    {
        printf("%d is zero",x);
    }
    return 0;
}
