#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *x = &a,*y = &b;
    printf("Address of pointer 1 : %d\n",x);
    printf("Address of pointer 2 : %d\n",y);
    printf("Equal or not : %d\n",*x==*y);
    printf("Greater than : %d\n",*x>*y);
    printf("Lesser than : %d\n",*x<*y);

    return 0;
}
