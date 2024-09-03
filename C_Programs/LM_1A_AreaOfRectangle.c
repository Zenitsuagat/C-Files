#include <stdio.h>
int main()
{
    float l,b,a;
    printf("Enter the Length : ");
    scanf("%f",&l);
    printf("Enter the Breadth : ");
    scanf("%f",&b);

    a = l * b;
    printf("Area of Rectangle is : %f",a);

    return 0;
}
