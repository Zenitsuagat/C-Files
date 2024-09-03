#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("Value of a : %d\n",a);
    int n;
    printf("Enter the value to be changed : ");
    scanf("%d",&n);
    *ptr = n;
    printf("After changing a is %d",a);

    return 0;
}
