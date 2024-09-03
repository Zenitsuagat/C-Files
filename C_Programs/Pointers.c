#include <stdio.h>
int main()
{
    float a = 2.5634;
    float *ptr;   //Pointer Declaration
    ptr = &a;     //Address of variable a
    printf("Actual value : %f\n",a);
    printf("Address of the value : %d\n",ptr);
    printf("Value using pointer : %f",*ptr);

    return 0;
}
