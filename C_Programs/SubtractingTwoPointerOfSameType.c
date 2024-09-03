#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *x=&a,*y=&b;
    printf("Address of pointer 1 : %d\n",x);
    printf("Address of pointer 2 : %d\n",y);
    printf("Pointer 1 - Pointer 2 : %d\n",x-y);
    printf("Pointer 2 - Pointer 1 : %d\n",y-x);


    return 0;
}
